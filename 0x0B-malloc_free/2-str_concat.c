#include "main.h"

/**
 * *str_concat - fvf
 * @s1: vf
 * @s2: vf
 * Return: vf
*/

char *str_concat(char *s1, char *s2)
{
int i, x = 0, y = 0;
char *s;
if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
x++;
}
for (i = 0; s2[i] != '\0'; i++)
{
y++;
}
s = malloc(x + y + 1);

if (s == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (i = 0; s2[i] != '\0'; i++)
{
s[x + i] = s2[i];
}
return (s);
}
