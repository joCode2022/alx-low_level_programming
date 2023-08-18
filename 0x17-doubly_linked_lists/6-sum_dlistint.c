#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The totalsum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int totalsum = 0;

	if (head)
	{
		while (current != NULL)
		{
			totalsum += current->n;
			current = current->next;
		}
	}

	return (totalsum);
}
