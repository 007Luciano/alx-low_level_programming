#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string character to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int l = 0;
	char last = s[0];
	int i;

	while (s[l] !=  '\0')
	l++;

	for (i = 0; i < l; i++)
	{
		l--;
		last = s[i];
		s[i] = s[l];
		s[l] = last;
	}
}
