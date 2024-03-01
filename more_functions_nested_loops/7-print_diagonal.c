#include<stdio.h>
#include "main.h"

/**
 *print_diagonal - imprime une ligne diagonale.
 *@n: la longueur de la ligne
 */

void print_diagonal(int n)

{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}
}

