#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copies a string and allocates memory for it
 * @str: a string to work with
 * Return: a pointer to the newly copied string
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *ptr;

	/* return null if str is null */
	if (str == NULL)
		return (NULL);

	/* get the length of the string */
	while (*(str + i) != '\0')
	{
		len++, i++;
	}

	/* allocate a new memory for the string*/
	ptr = (char *)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		*(ptr + i) = *(str + i);
	}

	*(ptr + i) = '\0';
	return (ptr);
}
