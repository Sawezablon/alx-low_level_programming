#include <stdio.h>

/**
  * main - Entry point
  * Description: use 'putchar' to print all numbers of base 16
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c = 'a';
	int i;

	while (i <= 16)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else if (i > 10)
		{
			putchar(c);
			c++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
