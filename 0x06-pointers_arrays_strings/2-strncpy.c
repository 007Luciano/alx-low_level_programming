#include "main.h"

/**
 * *_strncpy  - copies a string
 * @dest: input string
 * @src: input string
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}
}
