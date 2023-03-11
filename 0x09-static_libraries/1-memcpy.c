#include "main.h"

/**
 * *_memcpy - function to copy memory area
 *
 * @dest: pointer to char
 * @src: pointer to char
 * @n: an unsigned int
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
