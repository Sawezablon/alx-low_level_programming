#include "main.h"

/**
  * flip_bits - function that returns the number of bits
  * you would need to flip to get from one number to another.
  * @n: unsigned long int parameter
  * @m: unsigned long int parameter
  *
  * Return: the number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int k;

	k = n ^ m;

	while (k)
	{
		k = k & (k - 1);
		i++;
	}

	return (i);
}
