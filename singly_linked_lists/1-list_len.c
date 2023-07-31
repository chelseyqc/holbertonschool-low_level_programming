#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - returns the number of elements in a linked list
* @h: head of the list
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		num = num + 1;
	}
	return (num);
}
