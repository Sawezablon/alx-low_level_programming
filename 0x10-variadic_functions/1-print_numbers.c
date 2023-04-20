#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_numbers - print all numbers
  * @separator: parameter
  * @n: parameter
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;

	va_list zab;

	if (separator == NULL)
		return;

	va_start(zab, n);
	z = 0;
	while (z < n)
	{
		printf("%d", va_arg(zab, unsigned int));
		if (z < n - 1)
			printf("%c ", *separator);
		z++;
	}
	va_end(zab);
	printf("\n");
}
