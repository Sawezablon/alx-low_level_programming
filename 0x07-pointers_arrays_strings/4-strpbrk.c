#include "main.h"
#include <string.h>

/**
  * _strpbrk - function that searches a string for any of a set of bytes.
  * @s: string to be located the first occurence
  * @accept: string to be used to locate
  *
  * Return: a pointer to the byte in s that matches
  */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);

	return (ret);
}
