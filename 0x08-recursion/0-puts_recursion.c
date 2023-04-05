#include "main.h"
#include <string.h>

/**
  * _puts_recursion - function that prints a string, followed by a new line.
  * @s: pointer character to a string
  *
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
