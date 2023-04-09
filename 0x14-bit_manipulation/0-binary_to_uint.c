#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - transforms binary number to uint
* @b: binary
*
* Return: converted number or 0 if failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int mult = 1;
	int len = 0, i;

	if (b == '\0')
		return (0);
	while (b[len])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			n += mult;
		else if (b[i] != '0')
			return (0);
		mult *= 2;
	}
	return (n);
}
