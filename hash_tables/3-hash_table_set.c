#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - creates a new node
* @key: the key
* @value: the value associated with the key
*
* Return: the new node
*/
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL); /* returns NULL if malloc fails */
	}
	new_node->key = strdup(key); /* dupe key string and store in field */
	if (new_node->key == NULL)
	{
		free(new_node); /* if malloc fails for key, free malloc */
		return (NULL);
	}
	new_node->value = strdup(value); /* dupe value and store in field */
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table to add or update to
* @key: the key, cannot be empty
* @value: the value associated with the key
*
* Return: 1 if it succeeded, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL)
	{
		return (0);
	}
	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = add_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
