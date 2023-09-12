#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strlen - a program that print string length
* @str: string pointer
* Return: string length
*/
int  _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{x++; }
	return (x);
}
/**
* _strcpy - a program that copies string
* @dest: dest
* @src: src
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
/**
* new_dog - a program that create new dog
* @name: new dog
* @age: age of new dog in float
* @owner: owner of new dog
* Return: a pointer function
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nm_len;
	int on_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	nm_len = _strlen(name);
	on_len = _strlen(owner);

	new_dog->name = malloc((nm_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
		return (NULL);

	new_dog->owner = malloc(on_len + 1);
	if (new_dog->owner == NULL)
		return (NULL);
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}
