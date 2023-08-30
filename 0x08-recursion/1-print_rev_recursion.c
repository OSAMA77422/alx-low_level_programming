#include "main.h"

/**
 * _strlen_recursion - vdfv
 *
 * @s: vdf
 * Return: vfv
*/

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
	_print_rev_recursion(s + 1);
_putchar (*s);
}
}
