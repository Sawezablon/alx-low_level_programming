#include "main.h"
#include <stdio.h>

/**
  * print_array - function that prints n elements of an array of integers
  *
  * @a: parameter
  * @n: parameter
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (i < n)
	{
		printf("%d", a[i]);
		if (k < n)
			printf(", ");
		k++;
		i++;
	}
	printf("\n");
}
