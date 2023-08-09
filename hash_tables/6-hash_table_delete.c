#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}
	index = 0;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node);
			node = temp;
		}
		index = index + 1;
	}
	free(ht->array);
	free(ht);
}
