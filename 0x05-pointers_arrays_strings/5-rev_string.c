#include "main.h"

/**
 * rev_string - rev string
 *
 * @s: input.
 *
 * Return: nothing.
*/

void rev_string(char *s)
{
	int i, j;
	char count;

	for (i = 0; s[i] != '\n'; i++)
	       count++;	

	for (i = 0; i < (count / 2); i++)
	{
	j = s[i];
	s[i] = s[count - 1 - i];
	s[count - 1 - i] = j;
	}



}
