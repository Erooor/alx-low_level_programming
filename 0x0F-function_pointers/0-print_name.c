#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the string
 * @f: the function pointer
 *
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
