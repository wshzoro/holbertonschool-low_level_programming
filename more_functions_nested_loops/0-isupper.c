#include "main.h"
#include <stdio.h>

/**
*_isupper - check if a character is uppercase
*@c: the character to check
*Return : 1 if its true or 0 if its false
*/

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
