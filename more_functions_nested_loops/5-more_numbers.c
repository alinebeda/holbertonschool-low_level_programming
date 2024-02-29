#include <stdio.h>
#include "main.h"
/**
 * more_numbers - imprime les chiffres de 0 à 14, dix fois
 */
void more_numbers(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			{
				if (j > 9)
					_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			{
				if (j == 14)
					_putchar('\n');
			}
		}
	}
}
