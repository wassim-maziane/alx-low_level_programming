#include <stdio.h>
/**
 * main - entry point
 * @argc: size of argv
 * @argv: parameters
 *
 * Return: 0 (success) or 1 (failure)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}