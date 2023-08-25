#include "main.h"

/**
 * void reverse_array - void
 *
 * @a: input
 * @n: input
 *
 * Return: fvbd
*/

void reverse_array(int *a, int n)
{
int x, y, z;

for (x = 0; y = (n - 1); x < y; x++; y--)
{
z = a[x];
a[x] = a[y];
a[y] = z;
}
}
