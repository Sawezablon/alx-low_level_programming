#include "main.h"
#include <string.h>
/**
  * value - find palidrome
  * @s: parameter
  * @i: parameter
  *
  * Return: 1 or 0
  */
int value(char *s, int i)
{
	int len;

	len = strlen(s);
	if (*s == '\0')
		return (1);
	else if (*s == s[len - i])
		return (value(s + 1, i + 1));
	else
		return (0);
}
/**
  * is_palindrome - find if is a palindrome
  * @s: character string pointer
  *
  * Return: 1 if palindrome otherwise 0
  */
int is_palindrome(char *s)
{
	return (value(s, 1));
}
