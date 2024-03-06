#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @src: bytes from memory area
 * @dest: copied destination
 * @n: copie by bytes
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
