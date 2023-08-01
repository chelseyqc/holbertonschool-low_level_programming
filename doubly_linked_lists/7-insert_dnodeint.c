#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head of the list
* @idx: index of the list where the new node is added
* @n: what is added to the node
*
* Return: the address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	dlistint_t *next_node;
	unsigned int current_index;

	current_index = 0;
	current = *h; /* start at head */
	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n)); /* insert at head */
	}
	while (current_index < idx - 1)
	{
		if (current->next == NULL) /* current node = last */
		{
			return (NULL);
		}
		current = current->next;
		current_index = current_index + 1;
	}
	next_node = current->next; /* save ref next node */
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n)); /* insert end */
	}
	new_node = malloc(sizeof(*new_node)); /* alloc mem for new node */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	current->next = new_node;
	next_node->prev = new_node;
	new_node->prev = current;
	new_node->next = next_node;
	return (new_node);
}
