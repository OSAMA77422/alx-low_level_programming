#include "main.h"

/**
 * *malloc_checked - vfd
 * @b: ffgbb
 * Return: fdv
*/

void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == 0)
{
	exit(98);
}
return (m);
}
