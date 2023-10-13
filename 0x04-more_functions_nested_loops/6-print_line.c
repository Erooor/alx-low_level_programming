#include <stdio.h>

/**
 * print_line - Print a line
 * @n: the number of times the character _ should be printed
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
while (n != 0)
{
if (n > 0)
{
putchar('_');
n--;
}
if (n < 0)
{
putchar('_');
n++;}
}
putchar('\n');
}
