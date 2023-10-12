
#include <stdio.h>


/**
 * more_numbers - print a string of numbers
 *
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
    int c = 0;
    while (c <= 14)
    {if (c >= 10)
    {
    putchar('1');
    }
    putchar('0' + c % 10);
    c++;
    }
    putchar('\n');
}
