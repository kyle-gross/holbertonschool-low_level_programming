#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: function which accepts string data type
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
		f(name);
}
