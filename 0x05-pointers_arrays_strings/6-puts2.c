#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string input
 */

void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *c = str;
	int i;

	while (*c != '\0')
	{
		c++;
		l++;
	}
	t = l - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
