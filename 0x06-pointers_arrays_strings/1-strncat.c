#include "main.h"

/**
 * *_strncat - str
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int x = strlen(dest);

for (i = 0; i < n && *src != '\0'; i++)
{
dest[x + i] = src[i];
src++;
}
dest[x + i] = '\0';
return (dest);
}
