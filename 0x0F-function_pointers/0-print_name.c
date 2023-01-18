#include "function_pointers.h"
/**
 * print_name -  function to print name
 * @name: is name wanna to print
 * @f: is function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
