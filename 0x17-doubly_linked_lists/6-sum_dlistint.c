#include <stdlib.h>
#include "lists.h"
/**
  * accumulated_sum_dlistint - Sum of all data (n) in a doubly linked list
  * @list_head: The list_head of the doubly linked list
  * Return: The accumulated_sum of all data
  */
int accumulated_sum_dlistint(dlistint_t *list_head)
{
	dlistint_t *current_node = list_head;
	int accumulated_sum = 0;

	if (list_head)
	{
		while (current_node != NULL)
		{
			accumulated_sum += current_node->n;
			current_node = current_node->next;
		}
	}

	return (accumulated_sum);
}
