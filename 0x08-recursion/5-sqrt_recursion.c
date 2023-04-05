#include "main.h"

/**
  * _sqrt - function that returns the natural square root
  * @k: parameter number
  * @i: parameter
  *
  * Return: -1 if n does not have a natural square root
  */
int _sqrt(int k, int i)
{
	if (k == 0)
		return (0);
	else if (i * i > k || k < 0)
		return (-1);
	else if (i * i == k)
		return (i);
	return (_sqrt(k, i + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: pameter
  *
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
