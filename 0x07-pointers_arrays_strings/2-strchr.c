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

while (*s != '\0')
{
if (*s == c)
	return (s);
s++;
}
return (s);


return ('\0');
}
