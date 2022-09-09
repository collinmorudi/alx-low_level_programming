#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
*/

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
		}

	putchar('\n');

	return (0);
}
