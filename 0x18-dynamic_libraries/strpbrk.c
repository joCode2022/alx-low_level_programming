#include "main.h"
/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int c = 0, b;

	while (s[c])
	{
		b = 0;

		while (accept[b])
		{
			if (s[c] == accept[b])
			{
				s += c;
				return (s);
			}

			b++;
		}

		c++;
	}

	return ('\0');
}
