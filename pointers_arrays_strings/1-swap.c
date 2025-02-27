#include "main.h"

/**
* swap_int - swap the values of two integers
* @a: pointer of the first integer
* @b: pointer to the second interger
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
