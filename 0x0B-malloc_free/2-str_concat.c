#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *dup_string;
	int len1, len2, i = 0;

	/*get length of string s1*/
	while(*(s1 + i))
		len1++, i++;

	/*get length of string s2*/
	i = 0;
	while(*(s2 + i))
		len2++, i++;

	len2++; /* increment len2 to acommodate null terminator */

	/* allocate the memory for the concatenated string */
	dup_string = malloc(sizeof(char) * (len1 + len2));

	if (dup_string == NULL)
		return (NULL);

	/* concatenate s1 and s2 */
	for (i = 0; i < len1; i++)
	{
		*(dup_string + i) = *(s1 + i);
	}

	for (i = 0; i < len2; i++)
	{
		*(dup_string + (len1) + i) = *(s2 + i);
	}

	return (dup_string);
}
