#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print a variable of type struct dog
 * @d: pointer to struct
 * @name: name to print
 * @age: age to print
 * @owner: owner to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
        if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
        d->owner = owner;
	printf("Name: %s\nAge: %f\nOwner: %s\n",d->name,d->age,d->owner);
}
