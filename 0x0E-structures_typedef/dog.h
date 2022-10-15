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

#endif
