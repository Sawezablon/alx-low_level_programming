#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end
  * @head: pointer to pointer of head list
  * @n: interger to be added
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	temp = *head;

	node->n = n;
	node->next = NULL;

	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}

	return (*head);
}
