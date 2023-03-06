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
	unsigned int i = 0;
	int len = 0;
	int j;
	int cnt;

	while (accept[len] != '\0')
		len++;
	while (s[i] != '\0')
	{	cnt = 0;
		for (j = 0; j < len; k++)
		{
			if (s[j] == accept[j])
				cnt++;
		}
		if (cnt == 0)
			return (i);
		i++;
	}
	return (i);
}

