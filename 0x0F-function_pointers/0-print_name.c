#include "function_pointers.h"
#include<stdlib.h>
#include <stdio.h>
/**
* print_name - Writing a function that prints a name
* @name: name to be printed
* @f: pointer to a function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
