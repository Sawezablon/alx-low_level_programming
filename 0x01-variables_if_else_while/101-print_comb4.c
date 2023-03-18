#include <stdio.h>

/**
  * main - Entry point
  * Description: use 'putchar' print possible combinations of 3 digits
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
			int k;

			for (k = 1 + j; k < 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j + 1);
				putchar('0' + k + 1);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
