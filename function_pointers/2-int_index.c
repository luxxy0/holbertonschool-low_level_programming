#include "function_pointers.h"
/**
 * int_index - función que buca un número entero
 * @array: array
 * @size: tama�o de la array
 * @cmp: compara los num enteros
 * Return: comparacion
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
