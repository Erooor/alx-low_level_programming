#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: Input value
 *
 * Return: d if success
 */
void *malloc_checked(unsigned int b)
{
void *d;

d = malloc(b);
if (d == NULL)
exit(98);
return (d);
}
