#include "main.h"

/**
 * *_strcat - str
 *
 * @dest: input
 * @src: input
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
int x, y = 0, i = 0;

for (x = 0; dest[x] != '\0'; x++)
{
i++;
}
for (x = 0; src[x] != '\0'; x++)
{
y++;
}
for (x = 0; x <= y; x++)
{
dest[i + x] = src[x];
}
return (dest);
}
