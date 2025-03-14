#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free dog
 * @d: pointer to structure
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
