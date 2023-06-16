#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: parameter
* @idx: parameter
* @n: parameter
* Return: NULL or new adress
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int i = 1;

	ptr = NULL;

	if (idx == 0)
	{
		ptr = add_dnodeint(h, n);
		return (ptr);
	}

	new = *h;

	while (new != NULL)
	{
		if (i == idx)
		{
			if (new->next == NULL)
				ptr = add_dnodeint_end(h, n);
			else
			{
				ptr = malloc(sizeof(dlistint_t));
				if (ptr != NULL)
				{
					ptr->n = n;
					ptr->next = new->next;
					ptr->prev = new;
					new->next->prev = ptr;
					new->next = ptr;
				}
			}
			break;
		}
		new = new->next;
		i++;
	}

	return (ptr);
}
