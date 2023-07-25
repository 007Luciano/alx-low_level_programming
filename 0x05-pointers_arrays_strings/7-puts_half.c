#include "main.h"

/**
 * puts2 - prints half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int length = 0;
	char c = str;

	while (c != '\0')
	{
		length++;
		c++;
	}

	int n = (length - 1) / 2;

	c = str + n + 1;
	while (c != '\0')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
