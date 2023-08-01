#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_dnodeint_at_index - returns the nth node of a linked list
* @head: head of the list
* @index: index of the node, starts at 0
*
* Return: the nth node, else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int current_index;

	current_node = head;
	current_index = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (current_index < index)
	{
		if (current_node->next == NULL)
		{
			return (NULL);
		}
		current_node = current_node->next;
		current_index = current_index + 1;
	}
	return (current_node);
}
