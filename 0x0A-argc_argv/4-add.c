#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point add
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;
	char *ar;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &ar, 10);
		if (*ar)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);

	return (0);
}
