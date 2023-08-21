#include "main.h"
/**
 * puts2 - put.
 *
 * @str: str.
 *
 * Return: nothing
*/

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\n'; i++)
{
	if (i % 2 == 0)
		putchar(str[i]);
}

}
