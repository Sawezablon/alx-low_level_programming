#include "main.h"

/**
  * get_endianness - function that checks the endianness.
  *
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int num;
	char *c;

	num = 1;
	c = (char *) &num;
	if (*c)
		return (1);
	else
		return (0);
}
