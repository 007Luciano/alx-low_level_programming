#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @i: arguement passed for extraction of last digit
 * Return: n value of last digit
 */
int print_last_digit(int i)
{
int n;

if (i < 0)
i = -i;

n = i % 10;

if (n < 0)
n = -n;

_putchar(n + '0');

return (n);
}
