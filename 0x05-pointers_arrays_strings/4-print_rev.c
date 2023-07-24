#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: sting character to be reversed
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
