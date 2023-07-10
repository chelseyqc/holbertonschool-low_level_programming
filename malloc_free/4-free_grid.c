#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid previously created by alloc_grid function
* @grid: address of 2D grid
* @height: height of grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int index;

	index = 0;
	while (index < height)
	{
		free(grid[index]);
		index = index + 1;
	}
	free(grid);
}

