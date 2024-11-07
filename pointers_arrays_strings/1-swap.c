#include "main.h"
/**
 * swap_int - cambia 2 valores de num enteros
 * @a: var1
 * @b: var2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
