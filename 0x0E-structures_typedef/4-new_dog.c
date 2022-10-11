#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int d_name, d_owner;
	dog_t *p_dog;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (d_name = 0; name[d_name]; d_name++)
		;

	for (d_owner = 0; owner[d_owner]; d_owner++)
		;

	p_dog->name = malloc(d_name + 1);
	p_dog->owner = malloc(d_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < d_name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < d_name; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
