#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefixe
 *  @s: The number of bytes
 *  Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int count = 0;
	int i, j, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
			}
		}
		return (count);
	}
