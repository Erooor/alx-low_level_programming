#include <ctype.h>

/**
 * _islower - check for lowercase
 * @c: parametr to check
 *
 * Description: Return 1 if letter else Return 0
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
