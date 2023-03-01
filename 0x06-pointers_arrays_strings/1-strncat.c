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
		min = cnts - 1;
	for (i = 0; i <= min; i++)
		*(dest + cntd + i) = *(src + i);
	*(dest + cntd + min + 1) = '\0';
	return (dest);
}


