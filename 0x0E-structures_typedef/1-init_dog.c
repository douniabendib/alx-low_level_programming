#include "dog.h"
#include <sdtio.h>
/**
 * init_dog - intializes a variable of type struct dog
 * @d: pointerto struct
 * @name: name to initialize
 * @age: age to initialze
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
