#include "lists.h"

/**
* add_dnodeint -	adds a new node at the beginning
* @head: parameter
* @n: parameter
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = *head;
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->prev = NULL;
	ptr->n = n;

	if (new != NULL)
	{
		while (new->prev != NULL)
			new = new->prev;
	}

	ptr->next = new;
	if (new != NULL)
		new->prev = ptr;
	*head = ptr;

	return (*head);
}
