#include <stdio.h>
/**
 * main - entry point
 * @argc: size of argv
 * @argv: array of parameters
 *
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
