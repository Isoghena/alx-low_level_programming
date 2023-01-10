#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that copies a string
 * @str - a string to duplicate
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dupli
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		length++;

	dupli = malloc(sizeof(char) * (length + 1);

	if (dupli == NULL)
		return (NULL);

	while ((dupli[i] = str[i]) != '\0')
		i++;
	return (dupli);
}
