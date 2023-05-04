#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0 at a given index.
  * @n: pointer to number
  * @index: index to set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int temp = index;

	if (index > 63)
		return (-1);

	while (temp > 0)
	{
		i = i * 2;
		temp--;
	}

	if ((*n >> index) & 1)
		*n -= i;

	return (1);

}
