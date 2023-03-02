#include "main.h"
/**
 * _strncpy - copies n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copeid
 *
 * Return: pointer of destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int cnts = 0;

	while (*(src + cnts) != '\0')
		cnts++;
	if (n > cnts)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while(i < n)
		{
			if (dest[i] != '\0')
				dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
