#include <stdlib.h>
/**
 * free_grid - free a two dimentional array of integers
 * @grid: the two dimentional array to be freed
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
