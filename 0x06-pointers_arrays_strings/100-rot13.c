#include "main.h"

/**
 * *rot13 - vfd
 *
 * @c: vdfv
 *
 * Return: ptr
*/

char *rot13(char *c)
{
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = c;
int i;
while (*c)
{
for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
{
if (*c == a[i])
{
*c = b[i];
}

}
c++
}
return (ptr);
}
