#include "main.h"

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
