#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string we're working with
 */

void rev_string(char *s)
{
	/* a variable to store length of a string */
	int len = 0;
	int i = 0;
	char tmp;

	/* compute the length of a string */
	while (*(s + len) != '\0')
	{
		len++;
	}
	
	while (i < len)
	{
		tmp = s[len - 1];
		s[len - 1] = s[i];
		s[i] = tmp;
		len--, i++;
	}
}
