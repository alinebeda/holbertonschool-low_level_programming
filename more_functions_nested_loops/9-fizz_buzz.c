#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Description: This program prints the numbers from 1 to 100.
 * but for multiples of three print "Fizz" instead of the number.
 * for the multiples of five print "Buzz".
 * For numbers which are multiples of both three and five print "FizzBuzz"
 *
 * Return: 0 if successful, non-zero otherwise.
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			else if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
