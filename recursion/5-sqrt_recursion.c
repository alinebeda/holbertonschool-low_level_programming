#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * actual_square_recursion - recurses the naturel
 * @n: Number to calculate the square root of
 *
 * Return: Resulting square root
 */


int actual_square_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (actual_square_recursion(n, i + 1));
}
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (actual_square_recursion(n, i));
}
