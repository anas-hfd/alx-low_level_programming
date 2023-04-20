#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints the args numbers
 * @separator: the separator between numbers to print
 * @n: count
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d%s ", num, separator);
		}
	}
	printf("\n");
	va_end(ap);
}
