#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly created space
 *
 * @str: value to initialize the space
 * Return: a pointer to a char
 */

char *_strdup(char *str)
{
char *pointer;
unsigned int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
continue;
pointer = (char *)malloc(sizeof(char) * i + 1);
if (!pointer)
return (NULL);
for (j = 0; j < i; j++)
pointer[j] = str[j];
pointer[j] = '\0';
return (pointer);
}
