#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes we take from S2
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int cnt1, cnt2;

	cnt1 = cnt2 = 0;
	if (s1)
		for (; s1[cnt1]; cnt1++)
			;
	if (s2)
		for (; s2[cnt2]; cnt2++)
			;
	if (n < cnt2)
		cnt2 = n;
	str = malloc(sizeof(*str) * (cnt1 + cnt2 + 1));
	if (!str)
		return (NULL);

	str[cnt1 + cnt2] = '\0';
	while (cnt2--)
		str[cnt1 + cnt2] = s2[cnt2];
	while (cnt1--)
		str[cnt1] = s1[cnt1];
	return (str);
}
