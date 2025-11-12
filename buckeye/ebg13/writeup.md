# `Buckeye CTF 2025` : `ebg13` 

## Description
* Category: `web`

>This is a good web challenge to start with. Use the help button to ask for a hint if you get stuck.
>V znqr na ncc gung yrgf lbh ivrj gur ebg13 irefvba bs nal jrofvgr!

https://ebg13.challs.pwnoh.io

Files:
* [ebg13.zip](./ebg13.zip)

## Tools used
* `Dencode` -- online decoder
* `docker` -- for running the site locally to test

## Initial Steps
I took the clue provided `V znqr na ncc gung yrgf lbh ivrj gur ebg13 irefvba bs nal jrofvgr!` and plugged it into Dencode, I realized immediately that the text was a ROT13 cipher.

I checked out the website first and saw that when one entered a query to the site, it would bring you to the queried destination but scramble all the words using the ROT13 cipher. Therefor, the solution would likely have to do with navigating to a specific place and deciphering the text.

## Solution
I decided to do testing locally, so I opened the zip file and found a Dockerfile. I composed this file and ran the server locally. Additionally, there was a webserver.js file too, so I took a look at that.

```JS
import Fastify from 'fastify';
import * as cheerio from 'cheerio';

const FLAG = process.env.FLAG ?? "bctf{fake_flag}";

const INDEX_HTML = `
<!doctype html>
<html lang="en">

<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>ebj13</title>
  <link rel="stylesheet" href="https://unpkg.com/98.css" />
  <style>
    body {
      background: #008080;
      display: flex;
      align-items: center;
      justify-content: center;
      height: 100vh;
      margin: 0;
    }

    .window {
      zoom: 1.5;
      width: 460px;
    }

    .window-body {
      text-align: center;
    }

    form {
      display: flex;
      justify-content: center;
      gap: 8px;
      flex-wrap: wrap;
      margin-top: 10px;
    }

    input[type="text"] {
      width: 300px;
    }

    .example-buttons {
      display: flex;
      justify-content: center;
      gap: 8px;
      margin-top: 12px;
    }
  </style>
</head>

<body>
  <div class="window" role="application">
    <div class="title-bar">
      <div class="title-bar-text">ebj13</div>
      <div class="title-bar-controls">
        <button aria-label="Minimize"></button>
        <button aria-label="Maximize"></button>
        <button aria-label="Close"></button>
      </div>
    </div>
    <div class="window-body">
      <p><strong>Enter URL</strong></p>

      <form action="/ebj13" method="get">
        <input type="text" name="url" placeholder="Enter a URL" id="urlInput" />
        <button type="submit" class="button">ebj13 it!</button>
      </form>

      <div class="example-buttons">
        <button class="button" type="button" onclick="urlInput.value = 'https://example.com'">example.com</button>
        <button class="button" type="button"
          onclick="urlInput.value = 'https://news.ycombinator.com'">news.ycombinator.com</button>
      </div>

      <p style="margin-top:10px;font-size:12px;">Paste a full URL (including https://)</p>
    </div>
  </div>
</body>

</html> 
`;

const fastify = Fastify({ logger: true });

function rot13(str) {
  return str.replace(/[a-zA-Z]/g, (c) =>
    String.fromCharCode(
      c.charCodeAt(0) + (c.toLowerCase() < 'n' ? 13 : -13)
    )
  );
}

function rot13TextNodes($, node) {
  $(node)
    .contents()
    .each((_, el) => {
      if (el.type === 'text') {
        el.data = rot13(el.data);
      } else {
        rot13TextNodes($, el);
      }
    });
}

fastify.get('/', async (req, reply) => {
  return reply.type('text/html').send(INDEX_HTML);
});

fastify.get('/ebj13', async (req, reply) => {
  const { url } = req.query;

  if (!url) {
    return reply.status(400).send('Missing ?url parameter');
  }

  try {
    const res = await fetch(url);
    const html = await res.text();

    const $ = cheerio.load(html);
    rot13TextNodes($, $.root());

    const modifiedHtml = $.html();

    reply.type('text/html').send(modifiedHtml);
  } catch (err) {
    reply.status(500).send(`Error fetching URL`);
  }
});

fastify.get('/admin', async (req, reply) => {
    if (req.ip === "127.0.0.1" || req.ip === "::1" || req.ip === "::ffff:127.0.0.1") {
      return reply.type('text/html').send(`Hello self! The flag is ${FLAG}.`)
    }

    return reply.type('text/html').send(`Hello ${req.ip}, I won't give you the flag!`)
})

fastify.listen({ port: 3000, host: '0.0.0.0' }, (err, address) => {
  if (err) throw err;
  console.log(`Server running at ${address}`);
});
```
From reading the server file, I could see that there was an **admin** page I could navigate to, however it would only accept queries from the localhost, 127.0.0.1. Also, we can see that there's an endpoint located at **ebj13** that takes the initial query and then directs the user to the proper page.

In order to access the admin server, I had to create a query to ebj13 that would lead to the admin server. This was just a bit of trial and error but I eventually got a query that worked:
`http://localhost:3000/ebj13?url=http%3A%2F%2Flocalhost:3000%2Fadmin`
* Note, the %3A is a colon, and the %2F is a forward slash. That's just URL encoding to make sure special characters are not affected.

This returned a fake flag, but that's only because I was running it locally. To get the real flag, I ran it on the actual website:
`https://ebj13.challs.pwnoh.io/ebj13?url=http%3A%2F%2Flocalhost:3000%2Fadmin`

This returned the flag in ROT13 format: `Uryyb frys! Gur synt vf opgs{snxr_synt}`

I rotated the flag with dencode's ROT13 and got the real flag!
`Hello self! The flag is bctf{what_happens_if_i_use_this_website_on_itself}.`

## The Vulnerability
The goal of this challenge was to exploit an **SSRF (Server-Side Request Forgery)** vulnerability.

SSRF happens when an attacker can make the server send requests to unintended locations, for example:
1. The `ebj13` endpoint fetches any URL we give it.
2. We can force the server to request its own `admin` endpoint.
3. Since the request comes from the server (localhost), it passes the IP check in the JS code.
4. The server believes it's talking to itself and retuns the flag.
