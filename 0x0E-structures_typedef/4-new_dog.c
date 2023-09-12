#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - a program that creates a new dog
* @name: dog name
* @age: age of dog
* @owner: owner of dog
* Return: pointer to a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int new_l, owner_l, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (new_l = 0; name[new_l]; new_l++)
		;
	new_l++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < new_l; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (owner_l = 0; owner[owner_l]; owner_l++)
		;
	owner_l++;
	dog->owner = malloc(owner_l * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < owner_l; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
