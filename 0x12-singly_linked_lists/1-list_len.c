#include "main.h"

/**
  * list_len - Function that returns the number of elements in a linked
  * @h: a pointer to list
  *
  * Return: The number of elements
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
