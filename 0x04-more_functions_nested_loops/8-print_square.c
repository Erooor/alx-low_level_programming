#include <stdio.h>

/**
 * print_square - Print a Square.
 * @size: the size of the Square
 *
 * Return: Always 0 (success)
 */
void print_square(int size)
{
int i;
int j;
i = 0;
if (size <= 0)
{
putchar('\n');
}
else 
{
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
putchar('#');
j++;
}
putchar('\n');
i++;
}
}
}
