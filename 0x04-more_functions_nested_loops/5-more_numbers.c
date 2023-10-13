
#include <stdio.h>

/**
 * more_numbers - print a string of numbers
 *
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
int i;
int c;

i = 0;
while (i < 10)
{

c = 0;
while (c <= 14)
{
if (c >= 10)
{
putchar('1');
}
putchar('0' + c % 10);
c++;
}
i++;
putchar('\n');
}
}
