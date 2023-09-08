#include "main.h"

/**
 * wrdcnt - vf
 * @s: vfd
 * Return: fe
*/

int wrdcnt(char *s)
{
int i, n = 0;

for (i = 0; s[i]; i++)
{
if (s[i] == ' ')
{
if (s[i + 1] != ' ' && s[i + 1] != '\0')
	n++;
}
else if (i == 0)
	n++;
}
n++;
return (n);
}
/**
 * **strtow - vdf
 * @str: vdf
 * Return: dfv
*/
char **strtow(char *str)
{
int i, j, k, l, n = 0, wc = 0;
char **w;

if (str == NULL || *str == '\0')
	return (NULL);
n = wrdcnt(str);
if (n == 1)
	return (NULL);
w = malloc(sizeof(char *) * n);
if (w == NULL)
return (NULL);
w[n - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
	;
j++;
w[wc] = malloc(sizeof(char) * j);
j--;
if (w[wc] == NULL)
{
for (k = 0; k < wc; k++)
	free(w[k]);
free(w[n - 1]);
free(w);
return (NULL);
}
for (l = 0; l < j; l++)
w[wc][l] = str[i + l];
w[wc][l] = '\0';
wc++;
i += j;
}
else
i++;
}
return (w);
}