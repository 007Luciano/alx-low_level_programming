#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point
 * @c: starting point
 * Return: returns numbers
 */
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
