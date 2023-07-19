#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character check
 * Return: if character is letter
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
