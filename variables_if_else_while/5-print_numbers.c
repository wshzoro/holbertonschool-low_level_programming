#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints single-digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char digit;

/* Loop through digits '0' to '9' */
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);

/* Print newline */
putchar('\n');

return (0);
}
