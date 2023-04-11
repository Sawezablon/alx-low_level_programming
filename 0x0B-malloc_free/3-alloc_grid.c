#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array
  * @width: parameter
  * @height: parameter
  *
  * Return: NULL
  */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ret;

	if (width < 1 || height < 1)
		return (NULL);
	ret = malloc(sizeof(*ret) * height);
	if (ret == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ret[i] = malloc(sizeof(**ret) * width);
		if (ret[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			ret[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ret);
}
