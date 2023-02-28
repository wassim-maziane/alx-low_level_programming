#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int cnt;
	int i;

	cnt = 0;
	while (*(str + cnt) != '\0')
		cnt++;
	for (i = cnt / 2; i < cnt; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
