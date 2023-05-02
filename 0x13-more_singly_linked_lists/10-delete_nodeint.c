#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at index
  * @head: pointer to a pointer
  * @index: index to be deleted
  * Return: -1 or 1 if succeeded
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;
	listint_t *temp;

	node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && node != NULL; i++)
		{
			node = node->next;
		}
	}

	if ((index != 0 && node->next == NULL) || node == NULL)
		return (-1);

	temp = node->next;

	if (index != 0)
	{
		node->next = temp->next;
		free(temp);
	}
	else
	{
		free(node);
		*head = temp;
	}

	return (1);
}
