#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
