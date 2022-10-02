#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_number - iterate through each arg to check if it's a number
 * @argvv: an array of args
 * Return: true only if the arg is a number, false otherwise
 */

bool is_number(char *argvv)
{
	int i = 0;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum of arguments
 * @argc: num of args
 * @argv: args
 * Return: 0 on success, 1 if an arg is not a num
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
