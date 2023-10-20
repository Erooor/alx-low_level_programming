#include <stdio.h>

/**
 * reverse_array -  function that reverses the
 * content of an array of integers.
 * @a: Input value
 * @n: Input value
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i;
int t;

for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
