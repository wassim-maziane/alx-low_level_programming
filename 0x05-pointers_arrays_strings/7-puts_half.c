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
	if (n % 2)
		cnt = (cnt + 1) / 2;
	else
		cnt = cnt / 2;
	for (i = cnt; i < cnt; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
