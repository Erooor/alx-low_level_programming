#include <ctype.h>

/**
 * _islower - check for lowercase
 *
 * Description: Return 1 in lowercase else Return 0
 *
 * Return: Always 0 (success)
 */
/**@param c - parametr to check */
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
