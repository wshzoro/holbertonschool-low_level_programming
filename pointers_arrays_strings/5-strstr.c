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

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
;

if (!needle[j])
return (&haystack[i]);
}

return (NULL);
}
