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
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * max) + 1);
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		*(ptr + min) = min;
		min++;
	}

	return (ptr);
}
