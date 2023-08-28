#include "main.h"

/**
 * *_strchr - e
 *
 * @S: input
 * @c: input
 *
 * Return: s, null if its not found
*/

char *_strchr(char *s, char c)
{
int i;
char *p;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
*p = &s[i];
return (*p);
}
}
return ('\0');
}
