#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: parameter
 * @s2: parameter
 *
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int x;
	int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (str == NULL)
		return (NULL);

	x = 0;
	d = 0;
	while (c < (i + j + 1))
	{
		if (c < i)
			str[c] = s1[c];
		else
			str[c] = s2[d];
		c++;
		d++;
	}

	return (str);
}
