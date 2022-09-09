#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
