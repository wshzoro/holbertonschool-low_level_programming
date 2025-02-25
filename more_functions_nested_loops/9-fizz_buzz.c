#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with FizzBuzz rules.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz");
        else if (i % 3 == 0)
            printf("Fizz");
        else if (i % 5 == 0)
            printf("Buzz");
        else
            printf("%d", i);

        if (i != 100) /* Ajout d'un espace sauf pour le dernier élément */
            printf(" ");
    }

    printf("\n"); /* Saut de ligne à la fin */
    return (0);
}