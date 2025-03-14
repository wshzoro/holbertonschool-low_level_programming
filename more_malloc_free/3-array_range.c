#include <stdlib.h>

/**
 * array_range - creates an array of integers containing values from min to max
 * @min: the minimum value of the range
 * @max: the maximum value of the range
 *
 * Return: pointer to the newly created array,
 * or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
int *array;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min + i;

return (array);
}
