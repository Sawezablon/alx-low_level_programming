#include "lists.h"

/**
* free_dlistint - free elements
* @head: parameter
*
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		while (head->prev != NULL)
	{
			head = head->prev;
	}
	}

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
