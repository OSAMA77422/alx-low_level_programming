#include "main.h"

/**
 * puts_half - put half
 *
 * @str: input
 *
 * Return: nothing.
*/

void puts_half(char *str)
{
int i, q, c = 0;

for (i = 0; str[i] != '\0'; i++)
{
	c++;
}
q = (c - 1) / 2;
for (q; str[q] != '\0'; q++)
{
_putchar(str[q]);
}
_putchar('\n');
}
