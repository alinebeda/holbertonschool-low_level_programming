#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name using printer to function
 * @name: String to add
 * @f: Pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
