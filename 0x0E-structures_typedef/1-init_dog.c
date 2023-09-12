#include "dog.h"

/**
 * init_dog -  f
 * @d: d
 * @name: bd
 * @age: fdvv
 * @owner: fv
 * Return: fd
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
