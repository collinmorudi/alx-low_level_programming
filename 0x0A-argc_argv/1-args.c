#include <stdio.h>
#include "main.h"

/**
 * main - print each argument on a line
 * @argc: number of argument passed
 * @argv: pointer to array of arguments
 * Return: 0 on successful exec
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
