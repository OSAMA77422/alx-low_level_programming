#include "main.h"

/**
 * *_strstr - i
 *
 * @haystack: vfd
 * @needle: fevdf
 *
 * Return: vdf
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != 0; haystack++)
{
for (; *needle = *haystack; needle++)
{
if (needle == '\0')
{
return (haystack);
}
}
return (0);
}
