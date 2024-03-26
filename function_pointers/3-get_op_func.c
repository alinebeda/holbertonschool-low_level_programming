#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select la fonct°correct pr effec l'oe
 * @s: operateur passéen argmt au program
 * Return: pointeur vs la fonct°qui correspdt a perateur done�
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)

	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
