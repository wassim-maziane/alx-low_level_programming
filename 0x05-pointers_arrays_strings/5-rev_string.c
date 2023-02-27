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
	char c;

	while (*(s + cnt) != '\0')
		cnt++;
	for (i = 0; i < (cnt - 1) / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + cnt - 1 - i);
		*(s + cnt - 1 - i) = c;
	}
	if (cnt % 2 == 0)
	{
		c = *(s + (cnt - 1) / 2);
		*(s + (cnt - 1) / 2) = *(s + cnt - 1 - (cnt - 1) / 2);
		*(s + cnt - 1 - (cnt - 1) / 2) = c;

}

