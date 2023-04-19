#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - Entry point
  * @name: parameter name
  * @f: pointer to a function
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name == NULL)
		f(name);
}
