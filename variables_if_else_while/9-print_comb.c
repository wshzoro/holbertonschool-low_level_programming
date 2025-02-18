#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of single-digit numbers
* Numbers are separated by ", " and printed in ascending order.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar(num + '0'); /* Print the digit */

if (num < 9) /* Add ", " except after the last digit */
{
putchar(',');
putchar(' ');
}
}

putchar('\n'); /* Print new line */
return (0);
}
