#include "main.h"

/**
 * swap_int - swap value
 *
 * @a: input
 * @b: input
 *
 * Return : nothing
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
