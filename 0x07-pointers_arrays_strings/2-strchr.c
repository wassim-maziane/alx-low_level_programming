#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string the function will search in
 * @c: character we will look for
 *
 * Return: first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
