#include <stdio.h>

/**
  * beforeMain - Print before main function
  *
  * Return: Nothing
  */
void __attribute__ ((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
