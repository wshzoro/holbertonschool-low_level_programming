#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_strdup - return a pointer to a newly allocated space in memory
* @str: string
*
* Return: NULL if str is NULL
*/
char *_strdup(char *str)
{
char *dup;
int len;

if (str == NULL)
return (NULL);

len = strlen(str);
dup = (char *) malloc((len + 1) * sizeof(char));

if (dup == NULL)
return (NULL);

strcpy(dup, str);
return (dup);
}
