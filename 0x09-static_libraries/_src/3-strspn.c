#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: 2nd string
 *
 * Return: returns the index of the first character of s that isn't in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;

	i = 0;
	z = 0;
	checker = 0;
	count = 0;
	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				checker = 1;
				break;
			}
			z++;
		}
		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}

