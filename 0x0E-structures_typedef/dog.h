#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new structure to define dog
 *
 * @name: identifier of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: the struct defines the name age and owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * dog_t: typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *newdog(char *name, float age, char *owner);

#endif
