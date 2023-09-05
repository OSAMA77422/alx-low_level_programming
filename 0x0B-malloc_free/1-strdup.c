#include "main.h"

/**
 * *_strdup - vf
 * @str: string to copy to new location
 * Return: cfed
*/

char *_strdup(char *str)
{
	int i, count = 0;
	char *c;
if (str == NULL)
{
	return (NULL);
}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
		c = malloc(count);

if (c == 0)
{
	return (NULL);
}
for (i = 0; c[i] != '\0'; i++)
	c[i] = str[i];
return (c);
}
