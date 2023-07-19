#include "main.h"
/**
 * print_sign - Entry point
 * @n: integer check
 * Return: 1 and prints + if n is gretter than zero
 * 0 and prints 0 if n is zero
 * -1 and prints _ if n less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
