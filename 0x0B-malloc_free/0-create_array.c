#include "main.h"

/**
 * *create_array - v
 *
 * @size: vdf
 * @c: vfv
 *
 * Return: 0, null and pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

if (size == 0)
{
return (NULL);
}

arr = malloc(sizeof(char) * size);

if (arr == NULL)
	return (NULL);

for (i = 0; i < size; i++)

	arr[i] = c;
	return (arr);


}
