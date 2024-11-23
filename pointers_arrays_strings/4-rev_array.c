#include "main.h"
/**
 * reverse_array - invierte el contenido de una array de nú entero
 * @a: cadena 1
 * @n: cadena 2
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
