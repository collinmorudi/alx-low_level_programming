#include <stdio.h>
#include "main.h"

/**
 * main - print name of the program
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed on the commandline
 * Return: 0 on successful exec
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
