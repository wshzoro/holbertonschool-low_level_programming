#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints single-digit numbers of base 10 starting from 0,
* followed by a new line, using only putchar and no char variables.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit;

/* Loop through digits 0 to 9 */
for (digit = 0; digit <= 9; digit++)
putchar(digit + '0'); /* Convert int to char by adding '0' */

/* Print newline */

putchar('\n');

return (0);
}
