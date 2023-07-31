#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: the head of the list
* @str: a string to be added
*
* Return: address of the new element, else NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	if (head != NULL && str != NULL)
	{
		added_node = malloc(sizeof(*added_node));
		if (added_node == NULL)
		{
			return (NULL);
		}
		added_node->str = strdup(str);
		added_node->len = strlen(str);
		added_node->next = *head;
		*head = added_node;
		return (added_node);
	}
	return (NULL);
}
