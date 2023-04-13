#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - Entry block
  * @ptr: pointer parameter
  * @old_size: parameter size
  * @new_size: parameter new size
  *
  * Return: pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *p;
	unsigned int z;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ch = malloc(new_size);
		if (ch == NULL)
			return (NULL);
		return (ch);
	}

	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);

	p = ptr;
	z = 0;
	while (z < old_size)
	{
		*(ch + z) = *(p + z);
		z++;
	}
	free(ptr);
	return (ch);
}
