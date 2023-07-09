#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer parameter
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *ptr, *temp;

	if (ht == NULL)
		return;

	ptr = ht->shead;
	while (ptr)
	{
		temp = ptr->snext;
		free(ptr->key);
		free(ptr->value);
		free(ptr);
		ptr = temp;
	}

	free(head->array);
	free(head);
}

/**
 * shash_table_create - function that creates a hash table.
 * @size:	is the size of the array
 * Return: a pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		{
		table->array[i] = NULL;
		i++;
		}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Adds an element to hash table.
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 *
 * Return: 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *ptr, *temp;
	char *str;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	str = strdup(value);
	if (str == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = str;
			return (1);
		}
		temp = temp->snext;
	}

	ptr = malloc(sizeof(shash_node_t));
	if (ptr == NULL)
	{
		free(str);
		return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(str);
		free(ptr);
		return (0);
	}
	ptr->value = str;
	ptr->next = ht->array[i];
	ht->array[i] = ptr;

	if (ht->shead == NULL)
	{
		ptr->sprev = NULL;
		ptr->snext = NULL;
		ht->shead = ptr;
		ht->stail = ptr;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		ptr->sprev = NULL;
		ptr->snext = ht->shead;
		ht->shead->sprev = ptr;
		ht->shead = ptr;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		ptr->sprev = temp;
		ptr->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = ptr;
		else
			temp->snext->sprev = ptr;
		temp->snext = ptr;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value
 * @ht: A pointer parameter.
 * @key: The key to get the value of.
 * Return: NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	ptr = ht->shead;
	while (ptr != NULL && strcmp(ptr->key, key) != 0)
		ptr = ptr->snext;

	return ((ptr == NULL) ? NULL : ptr->value);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: A pointer parameter
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	ptr = ht->shead;
	printf("{");
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		if (ptr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints in reverse order.
 * @ht: A pointer parameter.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	ptr = ht->stail;
	printf("{");
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		if (ptr != NULL)
			printf(", ");
	}
	printf("}\n");
}
