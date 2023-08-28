#include "main.h"

/**
 * int _strspn - e
 *
 * @s: input
 * @accept: input
 *
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
int i;

while (*s != '\0')
{
if (*s == *accept)
	return (s);
}
	while (*s == *accept)
		return (s);
}
