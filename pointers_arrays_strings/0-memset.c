#include "main.h"
#include <stdio.h>

/**
* _memset - fills memory with a constant byte
* @s: starting adress of memory to be  filled
* @b: value to be filled
* @n: number of bytes to be filled
*
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
