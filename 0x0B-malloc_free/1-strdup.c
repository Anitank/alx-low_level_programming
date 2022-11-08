#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to allocated space
 * in memory, that contains a copy of the string
 * @str: string of chars
 * Return: address of the allocated memory
 */

char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *str_copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = tmp;
	str_copy = malloc(len * sizeof(char) + 1);

	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		str_copy[j] = str[j];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
