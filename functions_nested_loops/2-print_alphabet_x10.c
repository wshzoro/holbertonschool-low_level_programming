#include "main.h"

/** main - check the code.
*
* Return : always 0
*/
void print_alphabet_x10(void)
{
int i, letter;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter ++)
_putchar(letter);
_putchar('\n');
}
}
