#include <stdio.h>

/**
 * _puts -    prints a string, followed by a new line
 * @str: The value of the string
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
