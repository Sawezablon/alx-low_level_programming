#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - array function
  * @min: parameter
  * @max: parameter
  *
  * Return: a pointer array
  */
int *array_range(int min, int max)
{
	int *ptr, z;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (min <= max)
	{
		*(ptr + z) = min;
		min++;
		z++;
	}

	return (ptr);
}
