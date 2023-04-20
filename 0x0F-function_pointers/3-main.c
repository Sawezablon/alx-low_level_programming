#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Success(0);
  */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char operator;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];
	res = get_op_func(argv[2]);

	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = res(num1, num2);
	printf("%d\n", calc);
	return (0);
}
