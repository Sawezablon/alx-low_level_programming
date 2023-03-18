#include <stdio.h>

/**
  * main - Entry point
  * Description: use 'putchar' functio to print single digit number of basw 10
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
