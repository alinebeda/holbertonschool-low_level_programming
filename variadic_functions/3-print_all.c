#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all- Prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));

					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));

					break;
				case 'f':
					printf("%s%f", sep, (float)va_arg(args, double));

					break;
				case 's':

					s = va_arg(args, char *);
					printf("%s%s", sep, (s != NULL) ? s : "(nil)");

					break;
				default:
					i++;
					continue;
			}
			sep = ", ";

			i++;
		}
	}
		printf("\n");
		va_end(args);
	}
