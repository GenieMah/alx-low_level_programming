#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function outputs struct dog
 *
 * @d: initial parameter
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("(nil)\n");
		else
			printf("%s", (*d).name);

	if ((*d).age == NULL)
		printf("(nil)\n");
	 	else
			printf("%.1f", (*d).age);
	if ((*d).owner == NULL)
		printf("(nil)\n");
		else
			printf("%s", (*d).owner);
}


