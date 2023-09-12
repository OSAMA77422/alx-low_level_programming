#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - vf
 * @c: fv
 * Return: vdf
*/

char _strlen(char *c)
{
int i, l = 0;

for (i = 0; c[i] != '\0'; i++)
{
l++;
}
return (l);
}

/**
 * *_strcpy - vfe
 * @d: fv
 * @c: vrf
 * Return: vfd
*/

char *_strcpy(char *d, char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
	d[i] = c[i];
}
d[i] = '\0';

return (d);
}

/**
 * *new_dog - csd
 * @name: d
 * @age: fv
 * @owner: df
 * Return: fvev
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

if (name == NULL || age < 0 || owner == NULL)
{
	return (NULL);
}
dog = malloc(sizeof(dog_t));
		if (dog == NULL)
{
		return (NULL);
}
dog->name = malloc(sizeof(char) * _strlen(name) + 1);

if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog);
free(dog->owner);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
