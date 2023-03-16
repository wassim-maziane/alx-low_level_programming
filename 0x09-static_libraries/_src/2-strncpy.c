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
	int cntd = 0;

	while (cntd < n && src[cntd])
	{
		dest[cntd] = src[cntd];
		cntd++;
	}
	while (cntd < n)
	{
		dest[cntd] = '\0';
		cntd++;
	}
	return (dest);
}
