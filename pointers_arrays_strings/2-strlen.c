#include "main.h"

/**
*strln - returns the lenghth of a string
*@s: pointer to the string
*
*return: length of the strin
*/
int _strlen(char *s)

{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
