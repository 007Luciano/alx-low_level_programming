#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: aaa or NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		aaa[j] = str[j];
	}
	return (aaa);
}
