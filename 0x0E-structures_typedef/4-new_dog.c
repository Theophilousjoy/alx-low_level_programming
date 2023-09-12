#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
* new_dog - creates a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
* Return: returns NULL in case
* of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
int nm_len = 0, on_len = 0;

if (name != NULL && owner != NULL)
{
nm_len = _strlen(name) + 1;
on_len = _strlen(owner) + 1;
my_dog = malloc(sizeof(dog_t));

if (my_dog == NULL)
return (NULL);

my_dog->name = malloc(sizeof(char) * nm_len);

if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}

my_dog->owner = malloc(sizeof(char) * on_len);

if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}

my_dog->name = _strcpy(my_dog->name, name);
my_dog->owner = _strcpy(my_dog->owner, owner);
my_dog->age = age;
}

return (my_dog);
}

/**
* _strlen - Returns the length of a string
* @s: String to count
*
* Return: String length
*/
int _strlen(char *s)
{
int y = 0;

for (; *s != '\0'; s++)
{
y++;
}

return (y);
}

/**
* _strcpy - Copy a string
* @dest: Destination value
* @src: Source value
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int x;

for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}

dest[x++] = '\0';

return (dest);
}
