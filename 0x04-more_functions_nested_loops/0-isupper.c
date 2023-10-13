#include <stdio.h>

/**
 * _isupper - Return a value if c an upper or 
 * lowercase
 * @c: letter to check
 *
 * Return: 1 if upper or 0 if lower
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
