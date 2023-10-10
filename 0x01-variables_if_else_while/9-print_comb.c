#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:  prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main()
{
int i = 0;

while (i < 10)
{
putchar(i + '0');
putchar(',');
putchar(' ');
i++;
}
putchar('\n');

return (0);
}
