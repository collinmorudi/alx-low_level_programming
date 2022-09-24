#include "main.h"

/**
 * leet - encode string into 1337
 * @s: string to work with
 * Return: string encoded with 1337 leet
 */

char *leet(char *s)
{
	int arr_num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int arr_letters[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int i = 0;
	int j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; arr_letters[i] != '\0'; i++)
		{
			if (s[j] == arr_letters[i])
				s[j] = arr_num[i];
		}
	}

	return (s);
}
