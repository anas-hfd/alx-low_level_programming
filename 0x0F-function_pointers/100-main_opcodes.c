#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char **argv)
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	else
	{
		if (print_opcodes != NULL && num_bytes != 0)
		{
			print_opcodes(num_bytes);
		}
		return (0);
	}
}

/**
 * print_opcodes - prints opcodes
 * @num_bytes: number of bytes
 * Return: int
 */

void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
