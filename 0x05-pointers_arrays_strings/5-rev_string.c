#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string character to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int l = 0;
	char *last = s;

	while (*last != '\0')
	{
		l++;
		s++
	}
	last--;

	char hold;

	while (s < last)
	{
		hold = *s;
		*s = last;
		*last = hold;
		s++;
		last--;
	}
}
