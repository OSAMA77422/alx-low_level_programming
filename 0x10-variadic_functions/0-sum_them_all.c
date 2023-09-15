#include "variadic_functions.h"

/**
 * sum_them_all - vefd
 * @n: fdbvd
 * @...: dfv
 * Return: dfv
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, s = 0;

va_list g;

if (!n)
	return (0);

va_start(g, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(g, int);
	}
va_end(g);
return (s);
}
