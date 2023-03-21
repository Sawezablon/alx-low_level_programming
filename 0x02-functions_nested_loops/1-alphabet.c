#include "main.h"

/**
  * main - Entry block
  * Description: print lowercase using _putchar function
  * Return: Always 0
  */
void main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
