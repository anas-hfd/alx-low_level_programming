#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of parameters
 * @n: counter
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
