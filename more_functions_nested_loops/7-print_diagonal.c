#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal.
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
	print_diagonal(5);
	return (0);
}
