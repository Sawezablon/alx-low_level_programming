#include "main.h"

/**
  * print_alphabet_x10 - Entry block
  * Description: use '_putchar' to print alphabet 10 times
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}

}
