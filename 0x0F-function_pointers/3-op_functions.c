#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - operation add
 * @a: num 1
 * @b: num 2
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation sub
 * @a: num 1
 * @b: num 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation mul
 * @a: num 1
 * @b: num 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation div
 * @a: num 1
 * @b: num 2
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - operation mod
 * @a: num 1
 * @b: num 2
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
