#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @str: Value to copy
 * 
 * Return: if stn NULL return NULL else return stn
 */
char *_strdup(char *str)
{
	char *stn;
	int i, j = 0;
		
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	stn = malloc(sizeof(char) * (i + 1));
	if (stn == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		stn[j] = str[j];
	return (stn);
}
