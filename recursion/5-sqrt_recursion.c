#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - rerturn the natural square root of a number
* @n: square root
*
* Return: If n does not have a natural square root
* the function should return -1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 1));
}
