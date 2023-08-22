#include "main.h"
/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, b, t = 0;

	while (accept[c])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[c] == s[b])
			{
				t++;
			}

			b++;
		}

		c++;
	}

	return (t);
}
