#include "lists.h"

/**
  * add_node - function that adds a new node at the beginning
  * @head: pointer to pointer
  * @str: parameter string
  *
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = (*head);
	(*head) = node;

	return (*head);

}
