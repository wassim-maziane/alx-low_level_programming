#include "main.h"
/**
 * _strcpy - copies string of src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int cnt = 0;
	int i;

	while (*(src + cnt) != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
		*(dest + i) = *(src + i);
	*(dest + cnt) = '\0';
	return (dest);
}
