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
	int add = 0;
	int i;
	int num;

	i = 1;
	if (argc == 1)
		printf("0\n");

	while (i < argc)
	{
		num = atoi(argv[i]);
		if ((num == 0 && argv[i][0] != '0') || (num < 0))
		{
			printf("Error\n");
			return (1);
		}
		add += num;
		i++;
	}
	printf("%d\n", add);

	return (0);
}
