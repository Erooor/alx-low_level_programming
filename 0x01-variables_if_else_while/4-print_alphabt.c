#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:  print the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n = 'a';

while (n <= 'z')
{if (n != 'e' && n != 'q')
{putchar(n); }
n++;
}

putchar('\n');

return (0);
}
