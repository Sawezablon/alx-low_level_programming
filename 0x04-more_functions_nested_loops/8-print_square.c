#include "main.h"

/**
  * print_square - Entry point
  * @size: parameter
  * Desciption: function that prints a square, followed by a new line.
  * Return: void
  */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
