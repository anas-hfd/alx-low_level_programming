#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints the name
 * @name: a pointer to the name
 * @f: a pointer to the function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
