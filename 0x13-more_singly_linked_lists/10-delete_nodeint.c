#include "lists.h"

/**
  *
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int zab;
	listint_t *node;
	listint_t *temp;

	node = *head;

	zab = 1;
	while (node != NULL && zab < index)
	{
		node = node->next;
		zab++;
	}

	if (index != 0 && node == NULL)
		return (-1);

	temp = node->next;

	if (index == 0)
	{
		*head = temp;
		free(node);
	}
	else
	{
		node->next = temp->next;
		free(temp);
	}

	return (1);
}
