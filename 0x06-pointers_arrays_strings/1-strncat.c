#include "main.h"

/**
 * *_strncat - str
 *
 * @dest: dest
 * @src: input
 * @n: input
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int x = 0, i;

for (i = 0; dest[i] != '\0'; i++)
{
x++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[x + i] = src[i];
}
dest[x + i] = '\0';
return (dest);
}
