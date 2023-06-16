#include "lists.h"

/**
* get_dnodeint_at_index - get node
*
* @head: parameter
* @index: parameter
* Return: dlistint_t or NUll
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			break;
		}
		else
		{
			head = head->next;
			count++;
		}
	}
	return (head);
}
