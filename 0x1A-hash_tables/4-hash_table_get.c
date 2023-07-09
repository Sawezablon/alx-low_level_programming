#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a value associated with a key.
  * @ht:  is the hash table you want to look into
  * @key:  is the key you are looking for
  * Return: the value associated with the element, or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	ptr = ht->array[i];
	while (ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;

	return ((ptr == NULL) ? NULL : ptr->value);
}
