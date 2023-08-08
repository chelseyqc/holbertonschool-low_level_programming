#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
* key_index - gives you the index of a key
* @key: the key
* @size: the size of the array of the hash table
*
* Return: the index at which the key/value pair should be stored in the array
* of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int value;

	if (key == NULL)
	{
		return (0); /* returns 0 if key is null */
	}
	if (size == 0)
	{
		return (0); /* return 0 if size is 0 */
	}
	value = hash_djb2(key); /* calc hash value using DJB2 function */
	index = value % size; /* calc index with modulo of hash val and size */
	return (index); /* return calc'd index */
}
