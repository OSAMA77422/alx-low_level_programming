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

while (*s != '\0')
{
if (*s == c)
	return (s);
s++;
}
while (*s == c)
{
return (s);
}
return ('\0');
}
