#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - bdf
 * @name: vbc
 * @f: fdv
 * Return: vfd
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
	return (-1);
}
