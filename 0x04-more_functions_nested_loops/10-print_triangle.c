#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar('.');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
