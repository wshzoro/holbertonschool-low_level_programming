#include <stdio.h>
#include "main.h"

/**
 * void print_array - print n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 * followed by new line
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
