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
	int len;

	cnt = 0;
	while (*(str + cnt) != '\0')
		cnt++;
	len = cnt;
	if (cnt % 2)
		cnt = (cnt + 1) / 2;
	else
		cnt = cnt / 2;
	for (i = cnt; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
