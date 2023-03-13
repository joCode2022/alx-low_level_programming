#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char to be filled in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || !str)
{
return (NULL);
}
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
