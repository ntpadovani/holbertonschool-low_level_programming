#include"main.h"

/**
*free_grid -A function that frees a 2 dimensional grid previously created.
*@grid: The integer pointer.
*@height: The grid height interger.
*return: void
*/

void free_grid(int **grid, int height)
{
while (height >= 0)
{
	free(grid[height]);
	height--;
}
free(grid);
}
