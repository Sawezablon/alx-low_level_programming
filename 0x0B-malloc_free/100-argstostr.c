#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Entry point
 * @ac: argument count
 * @av: double pointer
 * Return: Null, pointer
 */

char *argstostr(int ac, char **av)
{
	char *ch, *str;
	int i;
	int j;
	int sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	sum = 0;
	while (i < ac)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, sum++)
			;
		i++;
		sum++;
	}
	sum++;

	ch = malloc(sum * sizeof(char));
	if (ch == NULL)
		return (NULL);

	str = ch;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ch = av[i][j];
			ch++;
			j++;
		}
		*ch = '\n';
		ch++;
		i++;
	}

	return (str);
}
