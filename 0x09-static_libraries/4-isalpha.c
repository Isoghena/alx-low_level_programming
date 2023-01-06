#include "main.h"

/**
 * _isalpha - check for character alphabet
 * @c: the character to be checked
 *
 * Return: 1 if character is letter lower or upper, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
