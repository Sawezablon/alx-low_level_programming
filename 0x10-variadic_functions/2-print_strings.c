#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_strings - print all strings
  * @separator: parameter
  * @n: parameter
  * Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	char *str;

	va_list zab;

	va_start(zab, n);
	z = 0;
	while (z < n)
	{
		str = va_arg(zab, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (z != (n - 1) && separator != NULL)
			printf("%s", separator);
		z++;
	}
	printf("\n");

	va_end(zab);
}
