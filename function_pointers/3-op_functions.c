#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum
 * @a: inter
 * @b: addition
 *
 * Return :Nothing
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: first
 * @b: second
 *
 * Return: Nothing
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product
 * @a: first
 * @b: second
 *
 * Return: Nothing
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division
 * @a: first
 * @b: second
 *
 * Return: Nothing
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: Element
 * @b: second
 *
 * Return: Nothing
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
