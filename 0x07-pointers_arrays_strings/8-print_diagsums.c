#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - function that prints the sum of the two diagonals
  * @a: array
  * @size: size of the array
  *
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int sum, sum1;

	sum = 0;
	sum1 = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			k = *(a + i * size + j);
			if (i == j)
			{
				sum += k;
			}
			if (i + j == size - 1)
			{
				sum1 += k;
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
