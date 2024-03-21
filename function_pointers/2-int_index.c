#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an interger
 * @array: The string
 * @size: the number of elements in the array
 * @cmp: Pointer to function
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
