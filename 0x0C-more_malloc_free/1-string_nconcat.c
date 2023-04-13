#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - Entry point
  * @s1: parameter
  * @s2: parameter
  * @n: unsigned int
  *
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int w, x, y, z;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (w = 0; s1[w] != '\0'; w++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;
	if (n > x)
		n = x;
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	y = 0;
	z = 0;
	while (y < (i + n))
	{
		if (y < i)
			ptr[y] = s1[y];
		else
			ptr[y] = s2[z++];
		y++;
	}
	ptr[y] = '\0';

	return (ptr);

}
