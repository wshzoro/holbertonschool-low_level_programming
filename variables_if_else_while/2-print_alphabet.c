#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase followed by a new line
* using only the putchar function twice.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n'); /* Print a new line */

return (0);
}

