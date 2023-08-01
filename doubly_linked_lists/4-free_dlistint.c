#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dlistint - frees a list
* @head: head of the list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
