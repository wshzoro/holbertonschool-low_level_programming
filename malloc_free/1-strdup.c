#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - return a pointer to a newly allocated space in memory
* @str: string
*
* Return: NULL if str is NULL
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = (char *) malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
