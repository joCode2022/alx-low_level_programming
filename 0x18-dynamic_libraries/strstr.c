#include "main.h"
/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int c = 0, b = 0;

	while (haystack[c])
	{
		while (needle[b])
		{
			if (haystack[c + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + c);
		}

		c++;
	}

	return ('\0');
}
