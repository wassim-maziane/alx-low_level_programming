#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination address
 * @src: source string
 * @n: number of characters to take
 *
 * Return: pointer of destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cnts = 0;
	int cntd = 0;
	int min = n;
	int i;

	while (*(src + cnts) != '\0')
		cnts++;
	while (*(dest + cntd) != '\0')
		cntd++;
	if ((min > cnts) && (cntd > cnts))
		min = cnts;
	else if ((n > cntd) && (cnts > cntd))
		min = cntd;
	for (i = 0; i < min; i++)
		*(dest + i) = *(src + i);
	if (min == n)
		*(dest + cntd + min) = '\0';
	return (dest);
}
