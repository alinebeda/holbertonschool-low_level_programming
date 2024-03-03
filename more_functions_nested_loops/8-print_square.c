#include "main.h"

/**
 * print_square - prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: Empty
 */

void print_square(int size)

{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

