#include "main.h"

/**
  * _isupper - Entry point
  * @c: parameter
  * Description: function that checks for uppercase character.
  * Return: return 1 if uppercase and return 0 if otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
