#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: size of argv
 * @argv: array of parameters
 *
 * Return: sum of given parameters
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int c;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
		{
			if (!(isdigit(argv[i][c])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
