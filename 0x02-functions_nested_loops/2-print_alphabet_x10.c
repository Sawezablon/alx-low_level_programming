#include "main.h"

/**
  * main - Entry block
  * Description: use '_putchar' to print alphabet 10 times
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 1; i <= 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}

}
