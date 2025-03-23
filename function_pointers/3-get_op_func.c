#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation function
 * @s: The operator passed as argument
 * Return: pointer to the corresponding function, or NULL if invalid
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op != NULL)

if (*(ops[i].op) == *s)

i++;
return (NULL);
}
