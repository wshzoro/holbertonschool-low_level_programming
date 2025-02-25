#include "main.h"

/**
* print_square - Prints a square using the character '#'.
* @size: The size of the square.
*
* If size is 0 or less, only a newline is printed.
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++) /* Boucle pour chaque ligne */
{
for (j = 0; j < size; j++) /* Boucle pour chaque colonne */
{
_putchar('#');
}
_putchar('\n'); /* Passe à la ligne suivante */
}
}
