#include "main.h"

/**
 * _abs - write a function that computes the absolutes value of an integer
 * @n: the integer to computes
 * 
 * Return: The absolute value of n
 */
int _abs(int n)
{
    if (n < 0)
    return (-n);
    else
    return (n);
}