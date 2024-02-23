#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase follewed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (int i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}


