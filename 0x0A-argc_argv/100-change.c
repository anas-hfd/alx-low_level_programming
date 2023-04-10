#include <stdio.h>
#include <stdlib.h>

/**
 * main - pints min numb of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;

		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			int number = 0;

			number = number + cents / 25;
			cents = cents % 25;

			number = number + cents / 10;
			cents = cents % 10;

			number = number + cents / 5;
			cents = cents % 5;

			number = number + cents / 2;
			cents = cents % 2;

			number = number + cents;

			printf("%d\n", number);
		}
	}
	return (0);
}
