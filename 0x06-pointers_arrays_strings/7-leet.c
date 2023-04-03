#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 *
 * @c: Encoded string
 *
 * Return: Encoded output
 */
char *leet(char *c)
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char ch[] = "4433007711";

	for (i = 0 ; *(c + i); i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (d[b] == c[a])
				c[a] = ch[b];
		}
	}
	return (c);
}
