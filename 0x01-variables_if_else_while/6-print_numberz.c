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
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');

return (0);
}
