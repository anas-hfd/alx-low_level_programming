#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @unused_variable: unsused
 * Return: int
 */

int main(int argc, char **unused_variable __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
