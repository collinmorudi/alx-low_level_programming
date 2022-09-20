#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen for the crack me file.
 * Return: 0 for success.
 */
int main(void)
{
	int random = 0;
        int count = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (count < 3000)
	{
		random = rand() % 128;
		if ((count + random) > 3000)
			break;
		count = count + random;
		printf("%c", random);
	}
	printf("%c\n", (3000 - count));
	return (0);
}
