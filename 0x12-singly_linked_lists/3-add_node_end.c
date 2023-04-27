#include "lists.h"

/**
  * add_node_end - function that adds a new node at the beginning
  * @head: pointer to pointer(dereference)
  * @str: parameter string
  *
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last;
	size_t i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	last = *head;

	node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = node;
	return (*head);

}
