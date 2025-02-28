#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes all words of a string.
* @str: The input string.
*
* Return: The pointer to the modified string.
*/


char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1; /* Flag to capitalize the next character */

/* Array of separators */
char separators[] = " \t\n,;.!?\"(){}";
int j;

while (str[i] != '\0')
{
/* Capitalize the character if it's a lowercase letter and flag is set */
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32;
}

/* Reset flag */
capitalize_next = 0;

/* Check if the current character is a separator */
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j])
{
capitalize_next = 1;
break;
}
}

i++;
}

return str;
}
