#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* delete_dnodeint_at_index - delete the node at the input index of a list
* @head: head of the list
* @index: index of the node that should be deleted
*
* Return: 1, else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous;
	dlistint_t *next_node;
	unsigned int current_index;

	next_node = *head;
	current_index = 0;
	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (next_node == NULL)
		{
			return (-1);
		}
		*head = next_node->next;
		if (next_node->next != NULL)
		{
			next_node->next->prev = NULL;
		}
		free(next_node);
		return (1);
	}
	while (current_index < index && next_node != NULL)
	{
		next_node = next_node->next;
		current_index = current_index + 1;
	}
	if (next_node == NULL)
	{
		return (-1);
	}
	previous = next_node->prev;
	previous->next = next_node->next;
	if (next_node->next != NULL)
	{
		next_node->next->prev = previous;
	}
	free(next_node);
	return (1);
}
