#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: the size of the memory to print
  * @c: parameter character
  *
  * Return: a pointer to the array of null is it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * size);

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
