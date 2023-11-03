#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: Input value
 * @size: Input value
 *
 * Return: j if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, mul = 0;
char *j;

if (nmemb == 0 || size == 0)
return (NULL);
mul = nmemb * size;
j = malloc(mul);
if (j == NULL)
return (NULL);
while (i < mul)
{
j[i] = 0;
i++;
}
return (j);
}
