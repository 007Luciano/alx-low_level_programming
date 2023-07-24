#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer for swapping
 * @b: integer for swapping
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;

}
