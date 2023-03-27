#include "main.h"
#include <string.h>

/**
  * print_rev - function that prints a string, in reverse
  *
  * @s:p\ parameter
  * Return: void
  */
void print_rev(char *s)
{
	int i;

	i = strlen(s);
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
