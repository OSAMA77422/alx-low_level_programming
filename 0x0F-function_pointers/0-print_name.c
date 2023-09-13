#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - bdf
 * @name: vbc
 * @f: fdv
 * Return: vfd
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}