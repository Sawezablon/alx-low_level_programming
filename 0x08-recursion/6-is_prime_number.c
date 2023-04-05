#include "main.h"

/**
  * primeNumber - find if its a prime number
  * @z: parameter
  * @i: parameter
  *
  * Return: 1 if prime number otherwise 0
  */
int primeNumber(int z, int i)
{
	if (z <= 1 || z % i == 0)
		return (0);
	else if (i * i <= z)
		return (primeNumber(z, i + 1));
	else
		return (1);
}

/**
  * is_prime_number - input integer is a prime number
  * @n: parameter
  *
  * Return: 1 if prime number otherwise 0
  */
int is_prime_number(int n)
{
	return (primeNumber(n, 2));
}
