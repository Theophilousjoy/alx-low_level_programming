#include <stdlib.h>
#include "dog.h"

/**
* init_dog - A function that initializes a dog structure
* @d: dog structure.
* @name: dog's name.
* @age: dog's age.
* @owner: owner's dog.
*
* Return: Nothing to return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
