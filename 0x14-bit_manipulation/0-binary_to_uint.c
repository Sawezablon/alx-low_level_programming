#include "main.h"

int po(int i);

/**
  * binary_to_uint - function that converts a binary number
  * @b: is pointing to a string of 0 and 1 chars
  *
  * Return: the converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	int i, z;
	unsigned int sum, k;

	if (b == NULL)
		return (0);

	i = strlen(b);
	z = 0;
	sum = 0;
	while (b[z] != '\0')
	{
		if (b[z] == '0')
			k = 0;
		else if (b[z] == '1')
			k = 1;
		else
			return (0);
		sum += k * po(i);
		i--;
		z++;
	}

	return (sum);
}

/**
  * po - calculate power
  * @i: parameter
  * Return: power
  */
int po(int i)
{
	int k = 1;

	if (i > 1)
	{
		while (i > 1)
		{
			k = k * 2;
			i--;
		}
	}

	return (k);
}
