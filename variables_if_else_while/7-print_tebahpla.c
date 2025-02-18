#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the lowercase alphabet in reverse,
* followed by a new line, using only putchar twice.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int letter;

/* Loop from 'z' to 'a' */
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

/* Print newline */
putchar('\n');

return (0);
}
