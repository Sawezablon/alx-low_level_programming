#include "main.h"
#include <string.h>

/**
  * _strspn - function that gets the length of a prefix substring.
  * @s: parameter
  * @accept: parameter
  *
  * Return: number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);

	return (i);
}
