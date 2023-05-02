#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer head
 *
 * Return: the address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *zab;
	listint_t *temp;

	zab = head;
	temp = head;

	for (; head && zab && zab->next;)
	{
		head = head->next;
		zab = zab->next->next;

		if (head == zab)
		{
			head = temp;
			temp = zab;
			for (;;)
			{
				zab = temp;
				for (; zab->next != head && zab->next != temp;)
				{
					zab = zab->next;
				}
				if (zab->next == head)
					break;

				head = head->next;
			}
			return (zab->next);
		}
	}

	return (NULL);
}
