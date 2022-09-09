#include <stdio.h>

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */
int main(void)
{
	int n = '0';

	while (n <= '8')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('9');

	return (0);
}
