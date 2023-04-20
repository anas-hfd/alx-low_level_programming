#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", oprt(a, b));
	return (0);
}
