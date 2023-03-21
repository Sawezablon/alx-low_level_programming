#include "main.h"

/**
  * print_alphabet - Entry point
  * Description: print lowercase using _putchar function
  * Return: Always 0
  */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
