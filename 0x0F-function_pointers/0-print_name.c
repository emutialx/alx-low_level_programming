#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - apointer function that prints name
 * @name: name to print
 * @f: function which print name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
