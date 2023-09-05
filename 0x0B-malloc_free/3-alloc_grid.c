#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer the array
 */
int **alloc_grid(int width, int height)
{
	int **abb;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	abb = malloc(sizeof(int *) * height);

	if (abb == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		abb[c] = malloc(sizeof(int) * width);

		if (abb[c] == NULL)
		{
			for (; c >= 0; c--)
				free(abb[c]);

			free(abb);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			abb[c][d] = 0;
	}

	return (abb);
}
