#include "main.h"

/**
* print_line - Draws a straight line using '_' characters.
* @n: The number of times the character '_' should be printed.
*
* If n is 0 or less, only a newline is printed.
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
