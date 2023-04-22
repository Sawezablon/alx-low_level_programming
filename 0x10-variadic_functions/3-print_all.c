#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_all - A function that prints anything
  * @format: a string parameter
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	char c_val;
	int i_val;
	float f_val;
	char *s_val, *separator = "";
	char *nil_str = "(nil)";
	int i = 0;

	va_start(arg, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_val = va_arg(arg, int);
				printf("%s%c", separator, c_val);
				break;
			case 'i':
				i_val = va_arg(arg, int);
				printf("%s%d", separator, i_val);
				break;
			case 'f':
				f_val = va_arg(arg, double);
				printf("%s%f", separator, f_val);
				break;
			case 's':
				s_val = va_arg(arg, char*);
				if (s_val == NULL)
					printf("%s%s", separator, nil_str);
				printf("%s%s", separator, s_val);
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
