#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of a string
 */

int _strlen_recursion(char *s)

{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
