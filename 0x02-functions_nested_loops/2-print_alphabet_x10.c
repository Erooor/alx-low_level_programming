#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 time
 *
 * Description: print alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int i = 0 , j;
while (i < 10)
{
j = 'a';
while (j <= 'z')
{
putchar(j);
j++;
}
putchar('\n');
i++;
}
}
