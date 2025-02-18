#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, then uppercase,
* followed by a new line. Uses only the putchar function three times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

/* Print lowercase letters */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

/* Print uppercase letters */
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

/* Print newline */
putchar('\n');

return (0);
}
