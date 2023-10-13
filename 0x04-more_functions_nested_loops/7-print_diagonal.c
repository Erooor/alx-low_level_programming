#include <stdio.h>

/**
 * print_diagonal - Print a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i;
int j;
i = 0;
while (i < n)
{
j = 0;
while (j < i + 1)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
i++;
}
putchar('\n');
}
