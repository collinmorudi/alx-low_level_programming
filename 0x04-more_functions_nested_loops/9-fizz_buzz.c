#include <stdio.h>

/**
 * main - prints the fizz buzz
 * Return: 0 for success
 */

int main(void)
{
	int max = 100;
	int i = 1;

	while (i <= max)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		
		if (i < 100)
			printf(" ");

		i++;

	}

	printf("\n");

	return (0);
}
