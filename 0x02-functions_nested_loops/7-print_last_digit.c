#include <stdio.h>

/**
 * print_last_digit - print last digit of an integer
 * @n - integer value
 *
 * Description: Print last digit
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
{
n = -n;
}
r = n % 10;
putchar(r + '0');
return(r);
}
