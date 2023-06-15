#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end
* @head: parameter
* @n: parameter
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *h;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (*head);
	}

	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}

	h->next = ptr;
	ptr->prev = h;

	return (ptr);
}
