#include <stdio.h>

/**
 * main - prints single digits separated by a comma and a space
 * Return: 0 for success
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);

		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}
