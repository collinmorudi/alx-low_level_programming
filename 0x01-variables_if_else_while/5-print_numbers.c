#include <stdio.h>

/**
 * main - prints numbers 0 through 9
 * Return: 0 for success
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}

	putchar('\n');

	return (0);
}
