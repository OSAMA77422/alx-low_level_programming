#include "main.h"

/**
 * **alloc_grid - efc
 * @height: vfd
 * @width: vfd
 * Return: vfd
*/

int **alloc_grid(int width, int height)
{
	int **o;

if (height <= 0 || width <= 0)
{
	return (NULL);
}
o = malloc(sizeof(int) * height);
if (o == 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
o[i] = malloc(sizeof(int) * width);
if (o[i] == 0)
{
free(o);
for (j = 0; j < height; j++)
	free(o[i]);
return (NULL);
}
for (j = 0; j < width; j++)
{
o[i][j] = 0;
}
}
return (o);
}
