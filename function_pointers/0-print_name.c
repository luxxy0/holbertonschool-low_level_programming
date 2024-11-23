#include "function_pointers.h"
/**
 * print_name - imprime un nombre
 * @name: nombre
 * @f: puntero de la funcion
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
