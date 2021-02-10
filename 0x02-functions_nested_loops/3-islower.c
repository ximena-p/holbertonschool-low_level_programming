#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: Integer holding the character
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
