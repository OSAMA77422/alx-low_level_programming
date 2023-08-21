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
for (i = n - 1; a[i] != '\0'; i++)
	printf("%d, ", a[i]);
printf("\n");
}
