#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
		}
		else
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
