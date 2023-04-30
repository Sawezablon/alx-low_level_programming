#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t list
  * @h: pointer node
  *
  * Return: number of elements
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
