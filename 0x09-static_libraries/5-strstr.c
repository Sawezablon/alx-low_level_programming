#include "main.h"
#include <string.h>

/**
  * _strstr - function that locates a substring.
  * @haystack: a string to be scanned
  * @needle: a small string to be used to scan
  *
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
