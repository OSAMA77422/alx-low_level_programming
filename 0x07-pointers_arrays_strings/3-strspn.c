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

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == accept[i])
{
return (s);
}
}
}
