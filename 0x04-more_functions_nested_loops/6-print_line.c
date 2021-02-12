#include "holberton.h"

/**
 * print_line - print line _________
 * @n: is the number lines
 * Return: 0 (Success)
 *
 */
void print_line(int n)
{
	int l = 95;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
