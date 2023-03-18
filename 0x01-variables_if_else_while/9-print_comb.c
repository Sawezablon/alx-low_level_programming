#include <stdio.h>

/**
  * main - Entry block
  * Description: use putchar to print all posible combinations of single-digit
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
