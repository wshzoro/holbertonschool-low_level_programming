#include "main.h"

/** 
* print_last_digit - prints the last digit of a number
* @n: The number to check
*
* Returns : the value of the last digit
*/

int print_last_digit;
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar('0' + last_digit);
return (last_digit);
}
