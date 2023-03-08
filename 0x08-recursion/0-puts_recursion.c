#include "main.h"
/**
 * _puts_recursion - prints string s, followed by a new line
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}

