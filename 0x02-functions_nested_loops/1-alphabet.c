#include "main.h"

/**
  * main - Entry block
  * Description: print lowercase using _putchar function
  * Return: Always 0
  */
int main(void)
{
	char ch[] = "a";
	int i = 0;

	while(ch[i] <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
