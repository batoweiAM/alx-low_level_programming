#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **spa;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	spa = malloc(sizeof(int *) * height);

	if (spa == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		spa[x] = malloc(sizeof(int) * width);

		if (spa[x] == NULL)
		{
			for (; x >= 0; x--)
				free(spa[x]);

			free(spa);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			spa[x][y] = 0;
	}
	return (spa);
}
