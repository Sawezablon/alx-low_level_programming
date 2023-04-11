#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer
  * @str: parameter character
  *
  * Return: NULL or a pointer to dublicated string
  */
char *_strdup(char *str)
{
	char *z;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	z = malloc(sizeof(*z) * (i + 1));
	if (z == NULL)
		return (NULL);

	j = 0;
	while (j <= i)
	{
		z[j] = str[j];
		j++;

	}

	return (z);

}
