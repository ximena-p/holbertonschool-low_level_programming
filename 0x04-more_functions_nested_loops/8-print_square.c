#include "holberton.h"

/**
 * print_square - print cuadrado #
 * @size: number of # cuadrado
 * Return: 0 (Success)
 *
 */
void print_square(int size)
{
	int f = 35;
	int i, a;

	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
