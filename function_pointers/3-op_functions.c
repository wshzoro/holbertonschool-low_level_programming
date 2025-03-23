#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - return the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of two numbers
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - return the sub of two numbers
 * @a: first number
 * @b: second number
 * Return: the sub of two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - return the mul of two numbers
 * @a: first number
 * @b: second number
 * Return: the mul of two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - return the div of two numbers
 * @a: first number
 * @b: second number
 * Return: the div of two numbers
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("ERROR\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - return the mod of two numbers
 * @a: first number
 * @b: second number
 * Return: the mod of two numbers
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("ERROR\n");
exit(100);
}
return (a % b);
}
