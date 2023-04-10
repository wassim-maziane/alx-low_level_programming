#include "main.h"
/**
* get_bit - returns the value of a bit at a given index
* @n: integer
* @index: index
*
* Return: value of bit or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (index--)
		n >>= 1;
	return (n & 1);
}

