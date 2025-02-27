#include "main.h"

/**
*_strln - returns the lenghth of a string
*@s: pointer to the string
*
*Return: length of the strin
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
