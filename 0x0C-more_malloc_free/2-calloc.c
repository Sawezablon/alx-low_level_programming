#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _calloc - function that allocates memory
  * @nmemb: parameter
  * @size: parameter
  *
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int z;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (z < nmemb)
	{
		ptr[z] = 0;
		z++;
	}

	return (ptr);
}
