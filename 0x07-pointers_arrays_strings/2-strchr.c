#include "main.h"

/**
 * *_strchr - e
 *
 * @s: input
 * @c: input
 *
 * Return: s, null if its not found
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
}
return ('\0');
}
