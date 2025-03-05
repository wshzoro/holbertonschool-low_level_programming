#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes from src.
* @dest: The destination string.
* @src: The source string to be appended to dest.
* @n: The maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
int compteur = 0;

while (dest[len] != '\0')
{
len++;
}

while (src[i] != '\0' && compteur < n)
{
dest[len] = src[i];
i++;
len++;
compteur++;
}

return (dest);
}
