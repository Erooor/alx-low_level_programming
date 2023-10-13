#include <stdio.h>

/**
 * print_most_numbers - Print number from 0 to 9 noexcept
 * 2 and 4
 *
 * Return: 0 (Sucess)
 */
void print_most_numbers(void)
{
int c = 0;
while (c <= 9)
{
if (c != 2 && c != 4)
{
putchar(c + '0');
}
c++;
}
putchar('\n');
}
