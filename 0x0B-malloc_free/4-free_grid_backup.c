#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid
 * @grid: Pointer to the grid
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
  int i, j;

  if (grid == NULL)
    return;

  for (i = 0; i < height; i++)
    {
      if (grid[i] != NULL)
	free(grid[i]);
    }

  free(grid);
}
