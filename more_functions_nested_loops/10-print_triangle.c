#include "main.h"

/**
* print_triangle - Prints a triangle followed by a new line.
* @size: The size of the triangle.
*
* If size is 0 or less, the function prints only a new line.
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

/* Loop for each row */
for (i = 1; i <= size; i++)
{
/* Print spaces: (size - i) spaces before the '#' characters */
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
/* Print '#' characters: i times */
for (j = 1; j <= i; j++)
{
_putchar('#');
}
/* End the current line */
_putchar('\n');
}
}
