#include "lists.h"


/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head of linklist
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *temp;
	size_t zab;

	node = head;
	if (node == NULL)
		exit(98);

	zab = 0;
	for (; node != NULL; node = node->next)
	{
		temp = node;
		zab++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < node->next)
		{
			printf("-> [%p] %d\n", (void *)node->next, node->next->n);
			break;
		}
	}

	return (zab);
}
