#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
