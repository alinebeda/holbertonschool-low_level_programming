#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal.
 *@n: la longueur de la ligne
 *
 *@return 0 on successful execution
 */

void print_diagonal(int n)

{
	char line;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

int main(void)
{
	int n = 5;

	print_diagonal(5);
	return (0);
}

