#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int cnt;

	while (*(s + cnt) != '\0')
		cnt++;
	return (cnt);
}
