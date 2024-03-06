#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: point destinatio
 * @b: Constant byte
 * @n: Bytes
 * Return: Alaways 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
