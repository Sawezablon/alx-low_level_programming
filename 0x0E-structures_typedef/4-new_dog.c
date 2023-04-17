#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Entry point that create new dog
 * @name: first member
 * @age: Second memmber
 * @owner: Third member
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	i = strlen(name);
	j = strlen(owner);

	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

