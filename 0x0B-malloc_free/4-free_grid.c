#include "main.h"

/**
 * free_grid - vddv
 * @grid: vdv
 * @height: vd
 * Return: vfd
*/

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
	free(grid[i]);
free(grid);

}
