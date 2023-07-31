#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* add_node_end - adds a new node to the end of a list
* @head: head of the list
* @str: a string to be added
*
* Return: the address of the new element, else NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str); /* copies */
		new_node->len = strlen(str); /* length */
		new_node->next = NULL; /* sets to the end */
		if (*head == NULL) /* if list is empty */
		{
			*head = new_node; /* assign to head of list */
		}
		else
		{
			current_node = *head; /* start at head */
			while (current_node->next != NULL) /* reaches last */
			{
				current_node = current_node->next;
			}
			current_node->next = new_node; /* added to last */
		}
		return (new_node);
	}
	return (NULL);
}
