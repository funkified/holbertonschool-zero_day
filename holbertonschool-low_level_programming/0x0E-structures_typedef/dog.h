#ifndef __DOG_H__
#define __DOG_H__
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - info about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: actual owner of dog
 */
typedef struct dog

{
	char *name;
	float age;
	char *owner;

} dog_t;

/* Initiate struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Prints struct dog */
void print_dog(struct dog *d);
/* Creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

#endif
