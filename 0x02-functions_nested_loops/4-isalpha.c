#include "main.h"
/**
 * _isalpha - checks if character is alphabetic
 * @c: character to test
 *
 * Return: 1 (true) or 0
 */
int _isalpha(int c)
{
	if (('a' <= c && c >= 'c') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
