#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

/* allocate array of pointers to rows */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* allocate rows */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* free previous rows and array of pointers */
for (j = i - 1; j >= 0; j--)
free(grid[j]);
free(grid);
return (NULL);
}
/* initialize elements to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
