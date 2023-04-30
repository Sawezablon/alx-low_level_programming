#include "lists.h"

/**
  * free_listint - free allocated memmory
  * @head: a pointer to head lists
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
