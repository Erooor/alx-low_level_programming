#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add to string in a new array
 * @s1: Value 1 to copy
 * @s2: Value 2 to copy
 * Return: return new
 */

char *str_concat(char *s1, char *s2)
{
char *new;
int i, j = 0;

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
new = malloc(sizeof(char) * (i + j + 1));
if (stn == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
new[i] = s1[i];
for (j = 0; s2[j]; j++)
new[i + j] = s2[j];
return (new);
}
