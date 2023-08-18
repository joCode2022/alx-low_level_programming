#include <stdlib.h>
#include "lists.h"

/**
  * total_sum_dlistint - total_sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The total_sum of all data
  */
int total_sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int total_sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			total_sum += current->n;
			current = current->next;
		}
	}

	return (total_sum);
}
