#include "main.h"

/**
  * print_line - Entry point
  * Description: function that draws a straight line in the terminal.
  * @n: parameter
  * Return: void
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
