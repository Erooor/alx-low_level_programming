#include <stdio.h>

/**
 * print_alphabet - print lowercase alphabet.
 *
 * Description: Print alphabect
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
int c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
