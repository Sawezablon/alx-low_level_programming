#include <stdio.h>

/**
  * main - Entry point
  * Description: Use 'putchar' function to print in lower and upper case
  * Return: Always 0 (Success)
  */
int main(void)
{
	char cLower = 'a';
	char cUpper = 'A';

	while (cLower <= 'z')
	{
		putchar(cLower);
		cLower++;
	}
	while (cUpper <= 'Z')
	{
		putchar(cUpper);
		cUpper++;
	}
	putchar('\n');

	return (0);
}

