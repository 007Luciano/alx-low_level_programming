#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: copy to this
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i; j++)
	{
		dest[j] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
