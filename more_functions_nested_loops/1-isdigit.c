#include "main.h"

/**
*_isdigit -  checks for a digit
*@c: the character to check
*Return: 1 if its true or 0 if its false
*/

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
return (1);
else
return (0);

}
