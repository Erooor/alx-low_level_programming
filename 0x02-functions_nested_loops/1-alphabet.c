#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Print alphabect
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
