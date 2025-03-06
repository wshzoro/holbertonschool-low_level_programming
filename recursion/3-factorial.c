#include "main.h"
#include <stdio.h>

/**
* factorial - returns the factorial of a given number
*
* Return: f n is lower than 0,
* the function should return -1 to indicate an error
*/
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(-1));
}
