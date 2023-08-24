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
int x, y, i;

for (x = 0; dest[x] != '\0'; x++)
{
i++;
}
for (x = 0; src[x] != '\0'; x++)
{
y++;
}
for (x = 0; x < y; x++)
{
dest[dest + x] = src[x];
}
return (dest);
}
