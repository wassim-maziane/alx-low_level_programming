#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory containing a copy of str
 * @str: string to be copied
 *
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *ar;
	int cnt = 0;
	int i;
	
	while (str[cnt])
		cnt++;

	ar = malloc((cnt + 1) * sizeof(char));
	if (ar == 0 || cnt == 0)
		return (NULL);
	for (i = 0; i < cnt; i++)
		arr[i] = str[i];
	arr[cnt] = '\0';
	return (ar);
}
