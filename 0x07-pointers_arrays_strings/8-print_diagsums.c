#include "main.h"

/**
 * print_diagsums - hh
 *
 * @a: input
 * @size: input
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
int t, s1 = 0, s2 = 0;

for (t = 0; a[t] != '\0'; t++)
{
s1 += a[t];
s2 += a[size - 1 - t];
a += size;
}
printf("%d, ", s1);
printf("%d\n", s2);
}
