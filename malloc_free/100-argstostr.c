#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ...
 */

char *argstostr(int ac, char **av)

{
	int i;
	size_t total_length = 0;
	size_t pos = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
        total_length += strlen(av[i]) + 1;
        i++;
	}

    result = (char *)malloc(total_length + 1);
    if (result == NULL)
        return (NULL);

    i = 0;
    
    while (i < ac)
    {
        strcpy(result + pos, av[i]);
        pos += strlen(av[i]);
        result[pos++] = '\n';
        i++;
    }
    result[pos] = '\0';

    return (result);
}
