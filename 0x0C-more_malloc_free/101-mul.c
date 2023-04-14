#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * isDigit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int isDigit(char *str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

/**
 * length - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * handleError - handles errors for main
 */
void handleError(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !isDigit(argv[1]) || !isDigit(argv[2]))
		handleError();

	char *num1 = argv[1], *num2 = argv[2];
	int len1 = length(num1), len2 = length(num2);
	int len = len1 + len2 + 1, carry, digit1, digit2, *res, a = 0;

	res = calloc(len, sizeof(int));
	if (!res)
		return (1);

	for (int i = len1 - 1; i >= 0; i--)
	{
		digit1 = num1[i] - '0';
		carry = 0;
		for (int j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			carry += res[i + j + 1] + (digit1 * digit2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[i] += carry;
	}

	for (int i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			putchar(res[i] + '0');
	}
	if (!a)
		putchar('0');
	putchar('\n');

	free(res);
	return (0);
}

