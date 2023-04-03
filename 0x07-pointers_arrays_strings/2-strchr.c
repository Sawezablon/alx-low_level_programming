#include "main.h"
#include <string.h>

/**
  * _strchr - function that locates a character in a string.
  * @s: string to be located
  * @c: character to be located from a string
  *
  * Return: a pointer to the first occurence
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*(s + 1) == c)
			return (s + 1);
		else if (*s == c)
			return (s);
		s++;
	}

	return (s + 1);
}
