#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s: string where we located
* @c: character to located
*
* Return: a pointer to dest
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
