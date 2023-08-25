#include "main.h"

/**
 * *leet - ll
 *
 * @c: vfvf
 *
 * Return: cp
*/

char *leet(char *c)
{
char *cp = c;
char b[] = {'A', 'E', 'O', 'T', 'L'};
int x[] = {4, 3, 0, 7, 1};
int i = 0;

while (*c)
{
for (i = 0; i < sizeof[b] / sizeof[x]; i++)
{
if (*c == b[i] || *c == b[i] + 32)
{
*c = 48 + x[i];
}

}

c++;
}
return (cp);
}
