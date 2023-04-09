#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: count of argument
  * @argv: array of pointer to a string
  *
  * Return: Success(0);
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
