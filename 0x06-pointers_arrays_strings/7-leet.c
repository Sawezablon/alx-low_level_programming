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
	char ab[] = "4433007711";

	for (a = 0 ; *(c + a); a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (d[b] == c[a])
				c[a] = ab[b];
		}
	}
	return (c);
}
