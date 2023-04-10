#include "main.h"
/**
* flip_bits - returns number of bit flips needed to get m from n
* @n: integer
* @m: second integer
*
* Return: number of bit flips needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flips = 0;

	while (xor)
	{
		flips += (xor & 1);
		xor >>= 1;
	}
	return (flips);
}
