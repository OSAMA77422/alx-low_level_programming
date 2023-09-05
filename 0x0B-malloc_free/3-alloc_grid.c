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
	int i, j;

if (height <= 0 || width <= 0)
{
	return (NULL);
}
o = malloc(sizeof(int **) * height);
if (o == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
o[i] = malloc(sizeof(int **) * width);
if (o[i] == NULL)
{
while (i--)
	free(o[i]);

free(o);
return (NULL);
}
for (j = 0; j < width; j++)
{
o[i][j] = 0;
}
}
return (o);
}
