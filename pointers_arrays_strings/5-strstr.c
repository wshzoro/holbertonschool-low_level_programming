#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string where we find
* @needle: substrings where we find the first occurence
* Return: to the beginning of the located substring
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

while (*haystack)
{
i = 0;

while (haystack[i] == needle[i] && needle[i] != '\0')
{
i++;
}

if (needle[i] == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
