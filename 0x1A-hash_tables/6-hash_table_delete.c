#include "hash_tables.h"

/**
  * hash_table_delete - function that prints a hash table.
  * @ht: is the hash table
  * Return: Nothing
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *ptr, *str;
	unsigned long int i;

    i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				str = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = str;
			}
		}
        i++;
	}
	free(head->array);
	free(head);
}
