#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* int sum_dlistint - returns the sum of all the data (n) of a linked list
* @head: head of the list
*
* Return: the sum of all the data, else 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current->next != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	sum = sum + current->n;
	return (sum);
}
