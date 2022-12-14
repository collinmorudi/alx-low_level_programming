#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: name var.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
