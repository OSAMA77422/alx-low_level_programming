#include "main.h"

/**
 * print_array - print.
 *
 * @a: input
 * @n: input
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; a[i] != '\0'; i++)
	ptintf("%d, ", a[i]);
printf('\n');
}
