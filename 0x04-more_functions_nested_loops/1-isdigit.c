#include <stdio.h>

/**
 * _isdigit - Return a value if c a digit
 * @c: Value to check
 *
 * Return: 1 if digit or 0 if else
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
