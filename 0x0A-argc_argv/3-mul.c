#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of two args
 * @argc: number of args
 * @argv: args to multiply
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
