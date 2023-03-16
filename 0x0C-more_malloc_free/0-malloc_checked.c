#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocated memory using malloc.
 *
 * @b: memory bytes to allocate.
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if  (ptr == NULL)
	exit(98);
return (ptr);
}
