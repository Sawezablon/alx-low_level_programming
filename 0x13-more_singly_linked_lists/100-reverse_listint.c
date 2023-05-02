#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: pointer to a pointer
  *
  * Return: pointer head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *temp;
	listint_t *new;

	node = *head;
	temp = NULL;
	new = NULL;

	while (node != NULL)
	{
		new = node->next;
		node->next = temp;
		temp = node;
		node = new;
	}
	*head = temp;

	return (*head);
}
