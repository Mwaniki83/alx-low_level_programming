#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words
 * @s: string to evaluate
 *
 * Return: number of words counted
 */
int count_word(char *s)
{
	int flg, d, f;

	flg = 0;
	f = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			f++;
		}
	}

	return (f);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL if Error
 */
char **strtow(char *str)
{
	char **mtrx, *tmp;
	int a, b = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mtrx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtrx == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mtrx[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	mtrx[b] = NULL;

	return (mtrx);
}
