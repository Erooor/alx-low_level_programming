#include "main.h"
/**
 * _isupper - print uppercase letters if else return 0
 * @c: Input value
 *
 * Return: 0 if lower or 1 if upper
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
