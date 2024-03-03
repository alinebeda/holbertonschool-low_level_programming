#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, const char *src)

{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (ptr);
}

