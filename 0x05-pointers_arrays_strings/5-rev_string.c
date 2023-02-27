#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int cnt = 0;
	int i;

	while (*(s + cnt) != '\0')
		cnt++;
	for (i = 0; i < (cnt - 1) / 2; i++)
	{
		*(s + i) = c;
		*(s + i) = *(s + cnt - 1 - i);
		*(s + cnt - 1 - i) = c;
	}
}

