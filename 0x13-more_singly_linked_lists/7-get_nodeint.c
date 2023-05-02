#include "lists.h"

/**
  * get_nodeint_at_index - function that returns the nth node of a listint_t
  * @head: pointer to head node
  * @index: index element to be searched
  *
  * Return: if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int zab;

	zab = 0;
	while (head != NULL && zab < index)
	{
		head = head->next;
		zab++;
	}

	return (head);
}
