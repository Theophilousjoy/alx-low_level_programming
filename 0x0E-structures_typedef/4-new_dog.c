#include "dog.h"
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog
*
* @name: pointer to the new dog's name
* @age: dog's age
*
* @owner: pointer to the dog's owner
* Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_len = 0, owner_len = 0, list;

	while (name[name_len] != '\0')
		name_len++;
}
while (owner[owner_len] != '\0')
{
	owner_len++;
}
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
	free(newDog);
	return (NULL);
}
newDog->name = malloc(sizeof(newDog->name) * name_len);
if (newDog->name == NULL)
{
	free(newDog->name);
	free(newDog);
	return (NULL);
}
for (list = 0; lost <= name_len; list++)
{
	newDog->name[list] = name[list];
}
newDog->age = age;
newDog->owner = malloc(sizeof(newDog->owner) * owner_len);
if (newDog->owner == NULL)
{
	free(newDog->owner);
	free(newDog->name);
	free(newDog);
	return (NULL);
}
