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
while (*s != '\0')
{
if (*s == *accept)
	return (s);
s++
}
	while (*s == *accept)
		return (s);
}
