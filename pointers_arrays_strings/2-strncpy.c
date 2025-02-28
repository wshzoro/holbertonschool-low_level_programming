#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: the destination string where the content is copied
 * @src: the source string to copy from
 * 
 * Return: The maximum number of char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}


for (; i < n; i++)
{
dest[i] = '\0';
}

return dest;
}
