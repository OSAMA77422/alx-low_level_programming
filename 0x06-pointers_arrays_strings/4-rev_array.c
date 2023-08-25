#include "main.h"

/**
 * reverse_array - void
 *
 * @a: input
 * @n: input
 *
 * Return: fvbd
*/

void reverse_array(int *a, int n)
{
int x;

for (x = 0, y = (n - 1); x < y; x++, y--)
{
t = a[x];
a[x] = a[y];
a[y] = t;
}

}
