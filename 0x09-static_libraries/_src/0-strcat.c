#include "main.h"
/**
 * _strcat - appends src string to dst string
 * @dest: destination string
 * @src: src string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int cnts = 0;
	int cntd = 0;
	int i;

	while (*(src + cnts) != '\0')
		cnts++;
	while (*(dest + cntd) != '\0')
		cntd++;
	for (i = 0; i <= cnts; i++)
		*(dest + cntd + i) = *(src + i);
	return (dest);
}
