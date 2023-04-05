#include "main.h"
#include <string.h>

/**
  * _print_rev_recursion - function that prints a string in reverse.
  * @s: char array of a string
  *
  * Return: Nothing
  */
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
		return;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
