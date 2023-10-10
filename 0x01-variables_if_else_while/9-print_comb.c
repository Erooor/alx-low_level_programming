#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all possible combinations of singl-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
putchar('0');
while (i < 9)
{
putchar(',');
putchar(' ');
putchar(++i + '0');
}
putchar('\n');

return (0);
}
