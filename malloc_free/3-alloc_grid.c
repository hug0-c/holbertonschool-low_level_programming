#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **tab;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(*tab));

	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));

		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			tab[x][y] = 0;
		}
	}

	return (tab);
}
