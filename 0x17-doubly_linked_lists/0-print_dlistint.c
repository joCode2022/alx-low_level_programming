#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}
	return (length);
}
