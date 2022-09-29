#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 * Return: 1 if a string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == *(s + 1))
		return (1);
	else
		return (0);
}
