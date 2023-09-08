#include "main.h"

/**
 * *string_nconcat - gfvfd
 * @s1: vfd
 * @s2: dfvd
 * @n: fd
 * Return: vdf
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s11;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (s11 = 0; s1[s11] != '\0'; s11++)
	{
		;
	}
str = malloc(sizeof (char) * s11 + n + 1);
	if (str == 0)
	{
		return (NULL);
	}
for (i = 0; s1[i] != '\0'; i++)
{
str[i] == s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
str[s11 + j] = s2[j];
}
str[s11 + j] = '\0';
return (str);
}
