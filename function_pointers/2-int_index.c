#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function that search for an integer
 * @array: pointers to the array
 * @size: size an array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: the index of the fisrt for wich cmp does not return 0
 * if no match is found or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
