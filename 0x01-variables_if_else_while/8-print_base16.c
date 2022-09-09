#include <stdio.h>

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
