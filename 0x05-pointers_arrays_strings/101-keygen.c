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
	int max = 2500; 

	srand((unsigned int) time(&t));
	while (count < max)
	{
		random = rand() % 128;
		if ((count + random) > max)
			break;
		count = count + random;
		printf("%c", random);
	}
	printf("%c\n", (max - count));
	return (0);
}
