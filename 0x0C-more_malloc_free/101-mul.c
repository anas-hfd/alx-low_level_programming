#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int n1, n2, mul;
	unsigned long int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; i < strlen(num1); i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(num2); i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	n1 = atoi(num1);
	n2 = atoi(num2);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
