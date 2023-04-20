#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - add all arguments
  * @n: number of arguments
  *
  * Return: add
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list zab;

	unsigned int z, int add;

	va_start(zab, n);

	if (n == 0)
		return (0);
	z = 0;
	add = 0;
	while (z < n)
	{
		add += va_arg(zab, unsigned int);
		z++;
	}
	va_end(zab);

	return (add);
}
