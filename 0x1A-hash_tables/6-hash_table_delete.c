#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}


