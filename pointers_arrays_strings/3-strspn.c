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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}
	return (count);
}
