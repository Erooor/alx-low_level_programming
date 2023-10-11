#include <ctype.h>

/**
 * _islower - check for lowercase
 *
 * Description: Return 1 in lowercase else Return 0
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
int r;
r = islower(c);
while (r == 1)
{
return (1);
}
return (0);
}
