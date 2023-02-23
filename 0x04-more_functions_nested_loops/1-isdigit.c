#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
