#include "main.h"
#include <string.h>

/**
  * print_chessboard - function that prints the chessboard.
  * @a: parameter
  *
  * Return: Nothing
  */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char k;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			k = a[i][j];
			_putchar(k);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
