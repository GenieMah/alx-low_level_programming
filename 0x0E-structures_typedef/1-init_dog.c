#include "dog.h"
#include "main.h"

/**
 *
 * init_dog - function initialises a var of type struct dog
 *
 * @d: name of type struct dog
 * @name: defined previously
 * @age: defined previously
 * @owner: defined previously
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
