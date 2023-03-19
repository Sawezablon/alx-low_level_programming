#include <stdio.h>

/**
  * main - Entry block
  * Description: use 'putchar' print possible combinations of two 2-digit
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j;

		for (j = 0; j < 9; j++)
		{
			int k;

			for (k = 0; k < 9; k++)
			{
				int l;

				for (l = 0; l < 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l + 1);
					if (i < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
