#include "main.h"

/**
 * _strlen - vdf
 * @s: string
 * Return: vf
*/

int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
{
;
}
return (size);
}

/**
 * *argstostr - fbd
 * @ac: vdf
 * @av: vfd
 * Return: vsd
*/

char *argstostr(int ac, char **av)
{
	int i, nc = 0, cmp = 0, j;
	char *s;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++, nc++)
{
nc += _strlen(av[i]);
}
s = malloc(sizeof(char *) * nc + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmp++)
{
s[cmp] = av[i][j];
}
s[cmp] = '\n';
cmp++;
}
s[cmp] = '\0';
return (s);
}
