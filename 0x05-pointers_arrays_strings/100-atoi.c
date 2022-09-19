#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: input string to work with
 * Return: integer we converted
 */
int _atoi(char *s)
{
	unsigned int x = 0, y = 1, z = 1, i = 0;
	unsigned int count = 0, size = 0;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			y *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				z *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		x = x + ((*(s + i) - 48) * z);
		z /= 10;
	}
	return (x * y);
}
