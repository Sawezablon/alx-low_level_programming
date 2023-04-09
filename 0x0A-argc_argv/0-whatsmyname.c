#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	(void)i;
	(void)argc;
	/**
	  *i = 0;
	  *while (argv[0][i] != '\0')
	  *{
	  *	_putchar(argv[0][i]);
	  *	i++;
	  *}
	  *_putchar('\n');
	  */
	printf("%s\n", argv[0]);

	return (0);
}
