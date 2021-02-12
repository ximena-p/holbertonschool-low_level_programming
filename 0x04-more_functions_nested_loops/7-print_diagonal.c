#include "holberton.h"

/**
 * print_diagonal - print linea in diagonal
 * @n: is the number de lineas in diagonal
 * Return: triangulo de lineas \
 *
 */
void print_diagonal(int n)
{
	int l = 92;
	int i, a;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
				_putchar(' ');
			}
			_putchar(l);
			_putchar('\n');
		}
	}
}
