#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: number of \ characters
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int cnt;
	int i;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		for (i = 0; i < cnt; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		cnt++;
		n--;
	}
}
