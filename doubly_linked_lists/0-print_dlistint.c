#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print_dlistint - prints all the elements of a list
* @h: head of the list
*
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num = num + 1;
	}
	return (num);
}
