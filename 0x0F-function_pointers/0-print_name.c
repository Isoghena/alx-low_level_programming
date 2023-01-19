#include "main.h"

/*
 * print_name - a function that prints a name
 * @name : name of a person
 * @f : function pointer that does not return anything
 *
 * Return: always success
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name);
}
