#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @needle: the first occurrence of the substring
 * @haystack: the string
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern != '\0' && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
