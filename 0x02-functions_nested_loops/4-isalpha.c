#include "holberton.h"
/**
 * _isalpha - checks for alphabet
 * @c: Integer holding the character
 * Return: 1- Lowercase character 0- Not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
