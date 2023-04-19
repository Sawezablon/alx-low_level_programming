#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - Entry point
  * @array: array of pointer to a function
  * @size: parameter size
  * @action: pointer to a function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
