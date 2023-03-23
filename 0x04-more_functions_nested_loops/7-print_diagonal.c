#include "main.h"

/**
  * print_diagonal - Entry point
  * @n: parameter
  * Description: function that draws a diagonal line on the terminal.
  * return: void
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			if (i > 0)
			{
				j = 0;
				while (j < i)
				{
					_putchar(' ');
					j++;
				}
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
