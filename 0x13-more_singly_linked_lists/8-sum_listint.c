#include "lists.h"

/**
  * sum_listint - function that returns the sum of all the data (n)
  * @head: pointer to node
  *
  * Return: 0 or sum
  */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
