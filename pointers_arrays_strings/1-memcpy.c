#include "main.h"
#include <stdio.h>

/**
* _memcpy - copies memory area
* @dest: a pointer to the destination buffer location
* where the data is to be copied
* @src: a pointer to the source buffer from where the data is to be copied
* @n: number of bytes to be copied
*
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
