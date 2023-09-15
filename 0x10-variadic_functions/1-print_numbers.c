#include "variadic_functions.h"

/**
 * print_numbers - vd
 * @n: fdv
 * @...: df
 * Return: dv
 * @separator: fv
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;

va_list a;

if (!n)
{
printf("\n");
return;
}
va_start(a, n);

while (i--)
{
printf("%d%s", va_arg(a, int), i ? (separator ? separator : "") : "\n");
}
va_end(a);
}
