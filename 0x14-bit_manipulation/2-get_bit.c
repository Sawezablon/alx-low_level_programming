#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index.
  * @n: parameter
  * @index: parameter
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k, i = 0;

	while (i <= index)
	{
		k = n % 2;
		n = n / 2;
		i++;
	}

	return (k);
}
