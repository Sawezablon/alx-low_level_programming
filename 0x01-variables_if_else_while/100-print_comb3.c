#include <stdio.h>

/**
  * main - Entry point
  * Description: use 'putchar' to print all different combination of 2 digits
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j;

		for (j = 0 + i; j < 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j + 1);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
