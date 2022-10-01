#include <stdio.h>
#include "main.h"

/**
 * main - print each argument on a line
 * @argc: number of args
 * @argv: pointer to array of arguments
 * Return: 0 on successful exec
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
