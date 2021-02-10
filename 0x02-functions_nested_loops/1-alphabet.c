#include "holberton.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0 (Success)
 */


void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
