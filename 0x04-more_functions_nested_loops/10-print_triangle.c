#include "main.h"

/**
  * print_triangle - Entry point
  * @size: parameter
  * Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		i = 1;

		while (i <= size)
		{
			if (size > 1)
			{
				j = 1;

				while (j <= size - i)
				{
					_putchar(' ');
					j++;
				}
				k = 1;
				while (k <= i)
				{
					_putchar(35);
					k++;
				}
			}
			else
			{
				_putchar(35);
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
