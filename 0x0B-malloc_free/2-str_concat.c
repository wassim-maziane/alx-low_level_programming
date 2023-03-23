#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int cnt1 = 0;
	int cnt2 = 0;
	int len;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	while (s1[cnt1])
		cnt1++;
	while (s2[cnt2])
		cnt2++;
	len = cnt1 + cnt2;
	if (len == 0)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	while (cnt2--)
		str[cnt1 + cnt2] = s2[cnt2];
	while (cnt1--)
		str[cnt1] = s1[cnt1];
	return (str);
}
