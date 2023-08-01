#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t
* @head: head of the list
* @n: input number
*
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	current_node = malloc(sizeof(*current_node));
	if (current_node == NULL)
	{
		return (NULL);
	}
	current_node->n = n;
	current_node->next = NULL;
	if (*head == NULL)
	{
		*head = current_node;
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = current_node;
		current_node->prev = end_node;
	}
	return (current_node);
}
