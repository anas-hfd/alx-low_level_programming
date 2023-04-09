#include <stdio.h>

/**
 *main - prints the filename
 *@unused_variable: unused
 *@argv: argument vector
 *Return: int
 */
int main(int unused_variable __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
