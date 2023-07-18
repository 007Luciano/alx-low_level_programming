#include<stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
int main(void)
{
_putchar('\n');
putchar('\n');
return (0);
}
