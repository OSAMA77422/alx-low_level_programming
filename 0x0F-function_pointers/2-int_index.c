#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - efvd
 * @array: fdvdf
 * @size: vf
 * @cmp: df
 * Return: fd
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
}
return (-1);
}
