#include <stdio.h>

/**
  * main - Entry point
  * Description: Use 'putchar' function to print alphabet in lowercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
