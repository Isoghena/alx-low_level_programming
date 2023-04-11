#include <stdlib.h>
#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size);
{
	unsigned long int i;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL)

	/* add value to the size of hash table */
	hash_table->size = size;
	/* create array for hash_table */
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return(NULL);
	}

	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}
