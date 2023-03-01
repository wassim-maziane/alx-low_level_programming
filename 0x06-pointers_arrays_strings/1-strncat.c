#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to be used from src
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int cnts = 0;
	int cntd = 0;
	int i;
	int min = n;

	while (*(src + cnts) != '\0')
		cnts++;
	while (*(dest + cntd) != '\0')
		cntd++;
	if (min > cnts)
		min = cnts;
	for (i = 0; i < min; i++)
		*(dest + cntd + i) = *(src + i);
	if (min == n)
		*(dest + cntd + min) = '\0';
	else
		*(dest + cntd + cnts) = '\0';
	return (dest);
}
