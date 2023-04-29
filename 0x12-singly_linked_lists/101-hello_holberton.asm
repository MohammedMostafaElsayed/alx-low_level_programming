section	.text
global _start

_start:
mov	edx,lent
mov	ecx,msge
mov	ebx,1
mov	eax,4
int	0x80
mov	eax,1
int	0x80

section	.data
msge db 'Hello, Holberton', 0x0a
lent equ $ - msge
