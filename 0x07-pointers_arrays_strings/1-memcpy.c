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
	int j;
	unsigned int k;

	i = 0;
	k = strlen(dest);
	j = 0;
	while (i < n)
	{
		dest[k] = src[j];
		k++;
		j++;
		i++;
	}

		return (dest);
}
