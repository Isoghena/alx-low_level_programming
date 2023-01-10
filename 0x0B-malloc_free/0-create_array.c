#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: poiinter to the array (Success), Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	 char *p;
	 unsigned int i = 0;

	 if (size == 0)
		 return (Null);
	 p = (char *) malloc(sizeof(char) * size);

	 if (p == Null)
		 return (0);
	 while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	 *(p + i) = '\0';
	 return (p);
}
