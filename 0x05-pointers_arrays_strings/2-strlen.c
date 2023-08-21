#include "main.h"

/**
 * _strlen - return tje lengh of string.
 *
 * Description: return
 * @s: input.
 *
 * Return: lengh of string.
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != ('\n'); s++)
		++c;

	return (c);


}
