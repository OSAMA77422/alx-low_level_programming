#include "variadic_functions.h"

/**
 * sum_them_all - vefd
 * @n: fdbvd
 * @...: dfv
 * Return: dfv
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = n, s = 0;

va_list g;

if (n == 0)
	return (0);

va_start(g, n);
	while (i--)
	{
		s += va_arg(g, int);
	}
va_end(g);
return (s);
}
