#include "main.h"
#include <string.h>

/**
  * _strcpy - function that copies the string pointed to by src
  *
  * @dest:parameter
  * @src: parameter
  * Return: void
  */
char *_strcpy(char *dest, char *src)
{	/**
	  *
	  * int i;
	  *
	  * i = 0;
	  * while (src[i] != '\0')
	  * {
	  *	dest[i] = src[i];
	  *	i++;
	  * }
	  * dest[i] = '\0';
	  */
	strcpy(dest, src);

	return (dest);
}
