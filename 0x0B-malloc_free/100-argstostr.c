#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * argstostr - add a desc
 * @ac: a string to work with
 * @av: to add
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}

	len += (ac + 1);

	str = (char *)malloc(sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k++] = av[i][j];
		}

		str[k++] = '\n';
	}

	return (str);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}
