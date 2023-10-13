#include <stdio.h>

/**
 * print_numbers - Print number from 0 to 9
 *
 * Return: 0 (Sucess)
 */
void print_numbers(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + '0');
a++;
}
putchar('\n');
}
