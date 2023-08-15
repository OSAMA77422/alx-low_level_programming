#include "main.h"

/**
 * time_table - print 9 time table
 *
 * example table
 * 0, 0, 0, 0,
 * 0, 1, 3, 4,
 *
*/

void times_table(void)
{
int n, m, p;

for (n = 0; n <= 9; n++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');

p = n * m;

/**
 * put space if p is single number
 * place the first digit if it is two number
*/
if (p <= 9)
	_putchar(' ');
else
	_putchar((p / 10) + 48);/*git the first digit*/

_putchar((p % 10) + 48);/*get the second digit*/

}

_putchar('\n');
}



}
