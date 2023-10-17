#include <stdio.h>

/**
 * print_rev -    prints a revers string, followed by a new line
 * @s: The value of the string
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;
while (i >= 0) {
putchar(s[i]);
i--;
}
putchar('\n');
}
