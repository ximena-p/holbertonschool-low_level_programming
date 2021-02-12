#include "holberton.h"

/**
 * more_numbers - print numbers 0 - 14 10 times
 *
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;
	int o;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (j > 9)
			{
				o = j % 10;
				_putchar('0' + (j / 10));
			}
			else
			{
				o = j;
				_putchar('0' + o);
			}
		}
		_putchar('\n');
	}
}
