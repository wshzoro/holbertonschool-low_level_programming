#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer that print a string
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
