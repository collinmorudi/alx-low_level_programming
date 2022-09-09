#include <stdio.h>

/**
 * main - prints single digits separated by a comma and a space
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
