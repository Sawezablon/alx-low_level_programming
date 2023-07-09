#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table.
  * @ht: is the hash table
  * Return: Nothing
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	unsigned char ch = 0;

	if (ht == NULL)
		return;

	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ch == 1)
				printf(", ");

			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			ch = 1;
		}
		i++;
	}
	printf("}\n");
}
