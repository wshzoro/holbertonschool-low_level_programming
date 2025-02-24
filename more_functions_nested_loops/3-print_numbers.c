#include "main.h"
#include <stdio.h>

/**
* print_number - prints the numbers, from 0 to 9
* 
* Returns: followed by a new line.
*/

void print_number(void)

{
char number;
for (number='0'; number <= '9'; number ++)
_putchar(number);
_putchar ('\n');

}
