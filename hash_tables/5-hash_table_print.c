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
	int first_pair;

	index = 0;
	first_pair = 1;
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
			if (first_pair == 1)
			{
				first_pair = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
                        node = node->next;
		}
		index = index + 1;
	}
	printf("}\n");
}
