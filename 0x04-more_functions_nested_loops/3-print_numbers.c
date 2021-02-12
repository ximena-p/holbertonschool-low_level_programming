#include "holberton.h"

/**
 * print_numbers - print numbers 1 - 9
 *
 * Return: 0 (Successs)
 *
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
