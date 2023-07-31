#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print_list - prints all the elements of a list_t list
* @h: head of the list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL) /* if h is NULL, the list is empty */
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL) /*checks if current node is NULL */
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* moves to next node */
		num = num + 1;
	}
	return (num);
}
