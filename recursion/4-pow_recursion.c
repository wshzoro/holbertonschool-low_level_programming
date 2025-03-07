#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return values x raised by power of y
 * @x: value to return
 * @y: value who raised by his power
*
* Return: f y is lower than 0, the function should return -1
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (_pow_recursion(x, y - 1) * x);
}
