#ifndef MAIN_H
#define MAIN_H

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *newdog(char *name, float age, char *owner);


#endif
