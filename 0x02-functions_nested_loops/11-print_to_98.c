#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers -98 or +98
 * @c: The character to print
 * Return: On success 1
 */
void print_to_98(int n)
{
	while(n != 98)
	{
		printf("%d, ", n);
		if(n >98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
