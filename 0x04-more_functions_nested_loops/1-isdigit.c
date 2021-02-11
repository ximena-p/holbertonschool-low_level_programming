#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit -checks for a digit
 * @c: int a number 0 - 9
 * Return: 0 - 9 or a++
 */
int _isdigit(int c)
{
	if (!(c > 47 && c < 58))
		return (0);
	return (1);
}
