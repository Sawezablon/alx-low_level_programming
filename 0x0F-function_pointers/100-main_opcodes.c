#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int z, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	z = 0
	while (z < bytes)
	{
		printf("%02hhx", *((char *)main + z));
		if (z < bytes - 1)
			printf(" ");
		z++;
	}

	printf("\n");

	return (0);
}

