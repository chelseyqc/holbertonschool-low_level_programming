#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* free_list - frees a list
* @head: head of the list
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	while (current_node != NULL) /* iterates until end of list */
	{
		next_node = current_node->next; /* save next before freeing */
		if (current_node->str != NULL)
		{
			free(current_node->str); /* free memory for str */
		}
		free(current_node);
		current_node = next_node; /* move to next node */
	}
}
