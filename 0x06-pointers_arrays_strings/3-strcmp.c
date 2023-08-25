#include "main.h"

/**
 * _strcmp - vf
 *
 * @s1: input
 * @s2: input
 *
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\n' || s2[i] != '\n'; i++)
{
if (s1[i] != s2[i])
{
if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
else if (s1[i] < s2[i])
	return (s1[i] - s2[i]);
}
}
return (0);
}
