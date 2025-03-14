#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements on this array
 * @size: size of bytes of the array
 *
 * Return: 0 if nmemb or size is 0, or if malloc faill
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
*((char *)ptr + i) = 0;
	return (ptr);
}
