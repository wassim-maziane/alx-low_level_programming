#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int cnt = 0;
	char *i;

	while (*(s + cnt) > 0)
		cnt++;
	for (i = s + cnt - 1; i >= s; i--)
		_putchar(*i);
	put_char('\n');
}
