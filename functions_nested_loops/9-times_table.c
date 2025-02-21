#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
* Return: 0
*/
void times_table(void)
{
int i, j, prod;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
prod = i *j;
if (j == 0)
{
_putchar('0' + prodd);
}
else
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
_putchar('0' + prod);
}
else
{
_putchar('0' + (prod / 10));
_putchar('0' + (prod % 10));
}
}
}
_putchar('\n');
}
}
