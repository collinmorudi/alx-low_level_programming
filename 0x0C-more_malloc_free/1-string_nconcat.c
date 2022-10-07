#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings together
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len_str1, len_str2;
	unsigned int len_total, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_str1 = 0; s1[len_str1] != '\0'; len_str1++)
		;

	for (len_str2 = 0; s2[len_str2] != '\0'; len_str2++)
		;

	if (n > len_str2)
		n = len_str2;

	len_total = len_str1 + n;

	p = malloc(len_total + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_total; i++)
		if (i < len_str1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len_str1];

	p[i] = '\0';

	return (p);
}
