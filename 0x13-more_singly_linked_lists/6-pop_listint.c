#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a listint_t
  * @head: head node
  * Return: 0 or element deleted
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);

	return (data);
}
