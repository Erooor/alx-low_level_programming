#include <ctype.h>

/**
 * _islower - check for lowercase
 * @c: parametr to check
 *
 * Description: Return 1 in lowercase else Return 0
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
