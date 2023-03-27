 #include "main.h"
#include <string.h>

/**
  * puts_half - function that prints half of a string
  *
  * @str: parameter
  * Return: void
  */
void puts_half(char *str)
{
	int i;
	int n;
	int r;

	i = strlen(str);
	r = i / 2;
	n = (i - 1) / 2;
	r++;
	n++;
	i--;
	if (i % 2 == 0)
	{
		while (r <= i)
		{
			_putchar(str[r]);
			r++;
		}
	}
	else
	{
		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
