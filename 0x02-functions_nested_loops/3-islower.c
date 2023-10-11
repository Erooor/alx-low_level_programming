#include <ctype.h>

/**
 * _islower - check for lowercase
 *
 * Description: Return 1 in lowercase else Return 0
 *
 * @param c - parametr to check
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
