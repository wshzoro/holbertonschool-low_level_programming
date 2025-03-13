#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable to malloc
 * Return: if malloc fails function should cause normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *checked;
checked = malloc(b);
if
(checked == NULL)
exit(98);

return (checked);
}
