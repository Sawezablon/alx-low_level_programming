#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - Entry point
  * @array: array of intergers
  * @size: length of array
  * @cmp: pointer to a function
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
