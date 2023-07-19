#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: last digit extracted from arguement
 * @i: arguement passed for extraction of last digit
 * Return: value of last digit
 */
int print_last_digit(int i)
{
int n = i % 10;
char nc = '0' + n;
_putchar(nc);
_putchar('\n');
return (n);
}
