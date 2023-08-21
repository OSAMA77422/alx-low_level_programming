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
int i, q, n, c = 0;

for (i = 0; str[i] != '\0'; i++)
{
	c++;
}
n = c / 2;
for (q = n; str[q] != '\0'; q++)
{
_putchar(str[q]);
}
_putchar('\n');
}
