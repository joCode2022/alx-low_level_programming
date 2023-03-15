#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char *argv[])
{
int i, j, k, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
j = atoi(argv[1]), k = atoi(argv[2]);
result = j *k;
}
printf("%d\n", result);
}
return (0);
}


