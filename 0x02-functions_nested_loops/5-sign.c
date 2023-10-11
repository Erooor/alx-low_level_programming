#include <stdio.h>

/**
 * print_sign - Check numbers if possitive or negative or 0
 * @n: parametr to check
 *
 * Description: Return 1 if n possitive, Return 0 if n is 0
 * else return -1
 *
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
if (n > 0)
{
print_sign(n);
return (1);
}
if (n == 0)
{
print_sign(n);
return (0);
}
else
{
print_sign(n);
return (-1);
}
}
