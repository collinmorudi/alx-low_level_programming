#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - find the length of a string
 * @str: string
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}
/**
 * strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * new_dog - creates a new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *copy_of_name;
	char *copy_of_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(copy_of_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(copy_of_owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
