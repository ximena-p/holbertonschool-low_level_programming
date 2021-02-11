#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: int 0 or 1
 */
int _isupper(int c)
{
	if (c > 96 && c < 123)
		return (0);
	return (1);
}
