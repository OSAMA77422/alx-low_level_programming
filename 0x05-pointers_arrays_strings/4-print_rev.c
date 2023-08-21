#include "main.h"

/**
 * print_rev - print rev
 *
 * @s: input
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	while (*s != '\0')
		s++;

	while (s--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
