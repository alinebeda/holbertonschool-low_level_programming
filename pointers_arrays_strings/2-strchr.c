#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: The character is not found
 * @c: pointed destination
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

