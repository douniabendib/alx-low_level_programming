#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes a variable of type struct dog
 * @d: pointerto struct
 * @name: name to initialize
 * @age: age to initialze
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
