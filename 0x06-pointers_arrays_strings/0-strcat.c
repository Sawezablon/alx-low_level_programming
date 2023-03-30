#include "main.h"
#include <string.h>

/**
  *_strcat - function that concatenates two strings.
  *@dest: parameter
  *@src: parameter
  *Return: a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
