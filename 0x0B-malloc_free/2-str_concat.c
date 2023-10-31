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
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	new = malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++, j++;
	}
	new[i] = '\0';
	return (new);
}
