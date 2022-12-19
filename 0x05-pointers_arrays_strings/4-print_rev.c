#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 *Return: Nothing
 */

void print_rev(char *s)
{
	int index;

	/*find the length of tring without null char*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index as it decrease*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
