#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: positive value for s1 > s2,negative value for s1 < s2,0 for s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int cnt = 0;
	int cnt1 = 0;
	int cnt2 = 0;

	while (s1[cnt1] != '\0')
		cnt1++;
	while (s2[cnt2] != '\0')
		cnt2++;
	while (s1[cnt] == s2[cnt])
		cnt++;
	if (cnt == cnt1 && cnt == cnt2)
		return (0);
	else if (s1[cnt] > s2[cnt])
		return (1);
	else
		return (-1);
}

