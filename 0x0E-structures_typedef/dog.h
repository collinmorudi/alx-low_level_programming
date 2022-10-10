#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for the dog structure
 */
typedef struct dog dog_t;

/**
 * struct dog - This is a dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* a function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/*  a function that prints a struct dog */
void print_dog(struct dog *d);

/* a function that creates a new dog. */
dog_t *new_dog(char *name, float age, char *owner);

#endif
