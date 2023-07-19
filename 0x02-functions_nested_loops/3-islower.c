#include "main.h"
/**
 * _islower - Entry point
 * @c: check character
 * Return: if character is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
