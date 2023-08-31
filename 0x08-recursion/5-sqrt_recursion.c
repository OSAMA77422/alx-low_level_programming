#include "main.h"

/**
 * _sqrt_recursion - vfd
 *
 * @n: vef
 * @val: vfd
 * Return: vs
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - cfv
 *
 * @n: vf
 * @val: fvefs
 *
 * Return: fv
*/

int square(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (square(n, val + 1));
else
	return (-1);
}
