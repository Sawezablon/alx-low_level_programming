#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: pointer to a pointer
  *
  * Return: pointer head
  */
listint_t *reverse_listint(listint_t **head)

	listint_t *temp;
	listint_t *new;

	temp = NULL;
	new = NULL;

	while (*head != NULL)
	{
		new = *head->next;
		*head->next = temp;
		temp = *head;
		*head = new;
	}
	*head = temp;

	return (*head);
}
