#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all numbers of base 16 in lowercase,
* followed by a new line, using only putchar three times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

/* Print digits 0-9 */
for (num = '0'; num <= '9'; num++)
putchar(num);

/* Print letters a-f */
for (num = 'a'; num <= 'f'; num++)
putchar(num);

/* Print newline */
putchar('\n');

return (0);
}
