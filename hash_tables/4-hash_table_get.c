#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table you want to look into
* @key: the key you are looking for
*
* Return: the value associated with the element, or NULL if key can't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int value;
	int index;
	hash_node_t *node;

	if ((key == NULL) || (ht == NULL))
	{
		return (NULL);
	}
	value = hash_djb2((unsigned char *)key);
	index = value % ht->size;
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
