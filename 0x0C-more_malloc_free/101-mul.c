#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * is_number - Entry block
  * @num: parameter
  * Return: 1
  */
int is_number(char *num)
{
	while (*num != '\0')
	{
		if (!isdigit(*num))
		{
			return (0);
		}
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

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}
	mul = atoi(num1) * atoi(num2);
	printf("%d\n", mul);

	return (0);
}
