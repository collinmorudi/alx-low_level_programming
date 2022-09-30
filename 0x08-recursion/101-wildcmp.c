#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 and s2 are identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
			i++, j++;
		if (s2[j] == '*')
		{
			j++;
			while ((s1[i] != s2[j]) && s1[i] != '\0')
				i++;
		}
		if (s1[i] != s2[j])
			return (0);
	}
	return (1);
}
