#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int cnt = 0;

	while (*(str + cnt) != '\0')
	{
		if (cnt % 2 == 0)
			_putchar(*(str + cnt));
		cnt++;
	}
}
