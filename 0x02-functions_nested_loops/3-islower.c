#include "main.h"
/**
 * _islower - checks if the character is lowercase
 *
 * Return: 1 if the parameter is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c <= 'z')
		return 1;
	else
		return 0;
}
