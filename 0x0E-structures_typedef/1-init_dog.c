#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - entry point
  * @d: parameter
  * @name: parameter
  * @age: parameter
  * @owner: parameter
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
