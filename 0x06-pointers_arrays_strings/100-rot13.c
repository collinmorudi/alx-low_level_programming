#include "main.h"
/**
 * rot13 - encodes a string using rot13 ...
 * @s: input string to work with
 * Return: the pointer to encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int count = 0;
	char rot13_arr[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13_arr[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
