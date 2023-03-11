#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the character to check
 * Return: 0 for uppercase and 1 for lowercase
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
