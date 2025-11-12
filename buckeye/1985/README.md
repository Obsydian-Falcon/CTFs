# `Buckey CTF 2025`: `1985`
Author: Walker Dauphin II (obysidan_falcon)

## Description
* Category: `forensics`

>This is a good forensics challenge to start with. Use the help button to ask for a hint if you get stuck.
>I found this old email in my inbox from 1985, can you help me figure out what it means?

Files:
* [email.txt](./email.txt)

## Tools used
* `file` -- unix command
* `python`
* `dosbox` -- DOS emulator for linux

## Initial Steps
I downloaded the email.txt from the challenge and immediately ran the **file** command on it, it returned the following:

```
1985/email.txt: uuencoded text, file name "FLGPRNTR.COM", ASCII text
```

This let me know that first, the file was a **uuencoded text**, a format that I'd never seen before. I realized that the file name was also "FLAGPRNTR.COM", so that must be of importance.

## Solution
After some googling I found that uuencoding is an old way of sending attachments in email. Email back then (the 80s) could only send text, no images or binaries, so one would us uuencoding in order to translate a binary into a text file. The recipient would then *decode* this uuencoded text into a proper binary and then run it. 

I also learned the **.COM** extension is a common extension for DOS binaries.

To simulate creating the binary, I wrote a python script that took in the email, deccoded it, then wrote it out to a file named "FLAGPRNTR.COM"

```Python
import binascii

with open('email.txt', 'r') as f, open('FLAGPRNTR.COM', 'wb') as out:
    for line in f:
        if line.startswith('begin ') or line.startswith('end') or not line.strip():
            continue
        try:
            out.write(binascii.a2b_uu(line))
        except: 
            pass
    
```

After the code executes, we get a nice little DOS binary. To use that binary, I booted up DosBox, read the instructions on basic usage, and ran the binary:

```DOS
Z:\> mount C /home/user/1985/
Z:\> C: 
C:\> FLAGPRNTR.COM
bctf{D1d_y0u_Us3_An_3mul4t0r_Or_d3c0mp1lEr}
```

This gave us the flag!
`bctf{D1d_y0u_Us3_An_3mul4t0r_Or_d3c0mp1lEr}`

