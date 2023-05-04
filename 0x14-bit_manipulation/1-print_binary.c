#include "main.h"

/**
  * print_binary - function that prints the binary representation
  * @n: parameter
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int i, z;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');

	else
	{
		i = 1;
		while (1)
		{
			z = i * 2;
			if (z == n || z + 1 == n)
				break;
			i++;
		}
		if (i * 2 == n)
		{
			print_binary(i);
			_putchar('0');
		}
		else if ((i * 2) + 1 == n)
		{
			print_binary(i);
			_putchar('1');
		}
	}
}
