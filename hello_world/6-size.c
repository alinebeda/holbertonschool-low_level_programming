#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of 167: %zu bytes\n", sizeof(167));
	printf("Size of 3.1415926: %zu bytes\n", sizeof(3.1415926));
	printf("Size of '$': %zu bytes\n", sizeof('$'));

	return (0);
}
