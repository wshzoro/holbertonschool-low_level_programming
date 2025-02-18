#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 * followed by a new line. Uses only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Loop through lowercase letters */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e') /* Skip 'q' and 'e' */
            putchar(letter);
    }

    /* Print newline */
    putchar('\n');

    return (0);
}
