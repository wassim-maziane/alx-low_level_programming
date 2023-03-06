#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: byte to fill with
 * @n: number of bytes to fill with
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

