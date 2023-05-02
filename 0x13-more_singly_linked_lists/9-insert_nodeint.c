#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node
  * @head: pointer node
  * @idx: where the new node should be added.
  * @n: element to be inserted
  * Return: listint_t node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int zab;
	listint_t *node;
	listint_t *temp;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	zab = 1;
	while (temp != NULL && zab < idx)
	{
		temp = temp->next;
		zab++;
	}

	if (idx != 0 && temp == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = temp->next;
		temp->next = node;
	}

	return (node);
}
