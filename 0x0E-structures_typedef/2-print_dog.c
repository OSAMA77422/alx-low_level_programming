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
printf("Name: %s\n", d->name ? d->owner : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
