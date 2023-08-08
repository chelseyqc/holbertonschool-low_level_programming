#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* hash_table_create - creates a hash table
* @size: the size of the array
*
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *table;

	index = 0;
	if (size == 0) /* size = 0 means hash table is invalid */
	{
		return (NULL);
	}
	table = malloc(sizeof(*table)); /* alloc mem for hash table */
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(*table)); /* alloc mem for array */
	if (table->array == NULL)
	{
		return (NULL);
	}
	/* alloc mem for array of pointers that will hold hash table entries */
	table->array = malloc(sizeof(*(table->array)) * size);
	if (table->array == NULL)
	{
		free(table); /* free the alloc mem */
		return (NULL);
	}
	while (index < size)
	{
		table->array[index] = NULL;
		index = index + 1;
	}
	table->size = size; /* store size of hash table */
	return (table);
}
