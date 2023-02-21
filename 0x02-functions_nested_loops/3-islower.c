#include "main.h"
/**
 * _islower - checks if the character is lowercase
 * @c: character to test
 *
 * Return: 1 if the parameter is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
