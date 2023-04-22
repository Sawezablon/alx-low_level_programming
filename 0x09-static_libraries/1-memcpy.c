#include "main.h"
#include <string.h>

/**
  * _memcpy - function that copies memory area
  * @dest: parameter
  * @src: parameter
  * @n: parameter
  *
  * Return:  pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = dest;
	i = 0;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

		return (ptr);
}
