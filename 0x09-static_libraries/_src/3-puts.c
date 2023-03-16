#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int cnt = 0;

	while (*(str + cnt) != '\0')
	{
		_putchar(*(str + cnt));
		cnt++;
	}
	_putchar('\n');
}
