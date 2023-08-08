#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* hash_table_print
* @ht: the hash table to print
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	index = 0;
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
			{
				printf(", ");
			}
		}
		index = index + 1;
	}
	printf("}\n");
}
