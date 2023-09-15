#include "variadic_functions.h"

/**
 * print_strings - vfd
 * @separator: fvd
 * @n: fd
 * @...: df
 * Return: df
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
char *c;
va_list h;

if (!n)
{
printf("\n");
return;
}
va_start(h, n);

while (i--)
{
printf("%s%s", (c = va_arg(h, char *)) ? c : "(nil)",
		i ? (separator ? separator : "") : "\n");
}
va_end(h);
}
