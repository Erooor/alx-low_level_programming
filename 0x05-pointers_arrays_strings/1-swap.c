#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers.
 * @a: The first value
 * @b: the second value
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
