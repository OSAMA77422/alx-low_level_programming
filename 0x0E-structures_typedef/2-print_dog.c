#include "dog.h"
#include <stdio.h>
/**
 * print_dog - bbvdf
 * @d: vef
 * Return: fvdv
*/

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else
printf("Name: (nil)\n");
printf("Age: (nil)\n");
printf("Owner: (nil)\n");
}
