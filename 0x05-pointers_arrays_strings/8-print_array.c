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
for (n = 0; a[n] != '\0'; n++)
	printf("%d, ", a[n]);
printf("\n");
}
