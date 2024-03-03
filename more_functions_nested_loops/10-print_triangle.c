#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: Emply
 */

void print_triangle(int size)

{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; i > 1; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
