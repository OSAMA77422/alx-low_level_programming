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
int i, x, j = 0;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (x = 0; needle[x] = haystack[i]; x++)
		{
			j++;
		}
	}
	for (i = j; haystack[i] != '\0'; i++)
		{
			return (haystack);
		}	
return (NULL);
}
