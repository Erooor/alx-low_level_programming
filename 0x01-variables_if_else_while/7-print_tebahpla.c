#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:  print the alphabet in lowercase reversed
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n = 'z';

while (n >= 'a')
{
putchar(n);
n--;
}
putchar('\n');

return (0);
}
