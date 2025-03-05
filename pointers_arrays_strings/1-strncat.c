#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes from src.
* @dest: The destination string.
* @src: The source string to be appended to dest.
* @n: The maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
