#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: parameter
  * @argv: parameter
  *
  * Return: 1 and 0;
  */
int main(int argc, char *argv[])
{
	int num;
	int i;
	int cent[] = {25, 10, 5, 2, 1};
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (i < 5)
	{
		coins += num / cent[i];
		num %= cent[i];
		i++;
	}
	printf("%d\n", coins);

	return (0);
}
