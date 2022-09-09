#include <stdio.h>

/**
 * main - prints letters of the alphabet in reverse order
 * Return: 0 for success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
