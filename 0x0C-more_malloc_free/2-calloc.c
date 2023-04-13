#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * _calloc - function that allocates memory
  * @nmemb: parameter
  * @size: parameter
  *
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int z;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < (nmemb * size); z++)
		*(ptr + z) = 0;

	return (ptr);
}
