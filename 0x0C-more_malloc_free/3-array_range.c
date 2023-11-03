#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that allocates memory for an array
 * @min: Input value
 * @max: Input value
 *
 * Return: m if success
 */
int *array_range(int min, int max)
{
int *m, i = 0;

if (min > max)
return (NULL);
m = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (m == NULL)
return (NULL);
while (min >= max)
{
m[i] = min;
i++;
min++;
}
return (m);
}
