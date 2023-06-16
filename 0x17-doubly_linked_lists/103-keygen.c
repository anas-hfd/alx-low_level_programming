#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generates a key
 * @argc: arg count
 * @argv: arg vector
 * Return: ints  0 or 1
 */

int main(int argc, char *argv[])
{
	unsigned int i, x;
	size_t len, add;
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = c[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = c[(add ^ 79) & 63];
	for (i = 0, x = 1; i < len; i++)
		x *= argv[1][i];
	p[2] = c[(x ^ 85) & 63];
	for (x = argv[1][0], i = 0; i < len; i++)
	{
		if ((char)x <= argv[1][i])
			x = argv[1][i];
	}
	srand(x ^ 14);
	p[3] = c[rand() & 63];
	for (x = 0, i = 0; i < len; i++)
		x += argv[1][i] * argv[1][i];
	p[4] = c[(x ^ 239) & 63];
	for (x = 0, i = 0; (char)i < argv[1][0]; i++)
		x = rand();
	p[5] = c[(x ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
