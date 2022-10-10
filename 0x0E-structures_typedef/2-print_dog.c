#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the props of the dog struct
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		return;
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
		return;
	}

	/* print the dog properties */
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
