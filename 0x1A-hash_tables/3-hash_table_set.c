#include "hash_tables.h"

/**
  *
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;
	char *temp;
	unsigned long int z;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp = strdup(value);
	if (temp == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	z = i;
	while (ht->array[z])
	{
		if (strcmp(ht->array[z]->key, key) == 0)
		{
			free(ht->array[z]->value);
			ht->array[z]->value = temp;
			return (1);
		}
		z++;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(temp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = temp;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
