#include "holberton.h"
#include <stdio.h>
/**
 * times_table - table nine
 *
 * Return: o (Succsess)
 */

void times_table(void)
{
	int i;
	int j;
	int numero = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			numero = i * j;

			if (numero <= 9)
			{
				if (j > 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				putchar('0' + numero);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar('0' + numero / 10);
				putchar('0' + numero % 10);
			}
		}
		putchar('\n');
	}
}
