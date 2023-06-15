#include "lists.h"

/**
* print_dlistint - prints all the elements
* @h: a pointer to struct dlistint_t
* Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
