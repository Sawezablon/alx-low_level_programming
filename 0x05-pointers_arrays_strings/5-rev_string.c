#include "main.h"
#include <string.h>

/**
  * rev_string - function that reverses a string.
  *
  * @s: parameter
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, l;
	char h;

	i = strlen(s);
	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
