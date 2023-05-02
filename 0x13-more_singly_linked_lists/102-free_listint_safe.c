#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to pointer to head
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *temp;
	size_t zab;

	zab = 0;
	for (node = *h; node != NULL; node = node->next)
	{
		zab++;
		temp = node;
		free(temp);

		if (temp < node->next)
			break;
	}
	*h = NULL;

	return (zab);
}

