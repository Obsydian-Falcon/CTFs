import binascii

with open('email.txt', 'r') as f, open('FLGPRINTR.COM', 'wb') as out:
    for line in f:
        if line.startswith('begin ') or line.startswith('end') or not line.strip():
            continue
        try:
            out.write(binascii.a2b_uu(line))
        except: 
            pass
    
