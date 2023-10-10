#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print alphabect
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void) /*print_alphabet - print lowercase alphabet*/
{
int c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
