#include <stdio.h>

/**
 * print_to_98 - Print tell 98
 * @n: Check value
 *
 * Description: This function prints till it reache 98
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
while ( n > 98 )
{
printf("%d, ", n);
n--;
}
while( n > 98 )
{
printf("%d, ", n);
n++;
}
printf("98");
putchar('\n');
return (0);
}
