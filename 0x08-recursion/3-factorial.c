#include "main.h"

/**
 * factorial - vfvd
 *
 * @n:  df
 *
 * Return: fd
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
