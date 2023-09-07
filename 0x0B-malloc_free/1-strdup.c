#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nnn;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	nnn = malloc(sizeof(char) * (a + 1));

	if (nnn == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		nnn[b] = str[b];

	return (nnn);
}
