#include "main.h"

/**
 *_abs - function that computes the absolute vlaue
 *
 * @n: takes in integar type input.
 *
 * Return: alaways 0 success
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
