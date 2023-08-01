#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t
* @head: head of the list
* @n: input integer
*
* Return: the address of the new element, else NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node;

	if (head != NULL)
	{
		added_node = malloc(sizeof(*added_node));
		if (added_node == NULL)
		{
			return (0);
		}
		added_node->n = n;
		added_node->next = *head;
		added_node->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = added_node;
		}
		*head = added_node;
		return (added_node);
	}
	return (NULL);
}
