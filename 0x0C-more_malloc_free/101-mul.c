#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiply 2 numbers as arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}
<<<<<<< HEAD
=======
		num++;
	}
	return (1);
}

/**
  * main - Entry block
  * @argc: argument count
  * @argv: string pointer
  * Return: 98 or 0
  */
int main(int argc, char **argv)
{
	char *num1;
	char *num2;
	unsigned int mul;
>>>>>>> 19f3ad3c2b717293be99c1725e4f9307fa78361f

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
