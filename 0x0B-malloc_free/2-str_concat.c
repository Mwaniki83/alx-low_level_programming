#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input to concatenate
 * @s2: input to concatenate
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int y, cy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = cy = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[cy] != '\0')
		cy++;
	concat = malloc(sizeof(char) * (y + cy + 1));

	if (concat == NULL)
		return (NULL);
	y = cy = 0;
	while (s1[y] != '\0')
	{
		concat[y] = s1[y];
		y++;
	}

	while (s2[cy] != '\0')
	{
		concat[y] = s2[cy];
		y++, cy++;
	}
	concat[y] = '\0';
	return (concat);
}
