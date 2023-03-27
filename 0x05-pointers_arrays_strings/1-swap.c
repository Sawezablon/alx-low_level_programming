#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  *
  * @a: parameter
  * @b: parameter
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
