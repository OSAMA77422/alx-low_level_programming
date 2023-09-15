#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - vfd
 * @array: fvd
 * @size: fvdv
 * @action: vf
 * Return: vfd
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

