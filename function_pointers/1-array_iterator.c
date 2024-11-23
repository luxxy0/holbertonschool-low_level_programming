#include "function_pointers.h"
/**
 * array_iterator - ejecuta una función dada como parámet
 * en cada elemento de unarray
 * @array: array
 * @size: tama�o de la array
 * @action: accion de los elementos
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
