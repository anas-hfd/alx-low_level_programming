#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < n_bytes; i++)
	{
		if (i == n_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
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
