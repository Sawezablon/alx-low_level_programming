#include "hash_tables.h"

void free_table(hash_table_t *table)
{
    // Frees the table.
    for (int i = 0; i < table->size; i++)
    {
        hash_node_t* array = table->array[i];

        if (array != NULL)
            free_item(array);
    }

    free(table->array);
    free(table);
}
