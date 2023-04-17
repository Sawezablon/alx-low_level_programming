#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Entry point
 * @d: first element
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
