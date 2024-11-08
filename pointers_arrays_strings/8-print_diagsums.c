#include "main.h"
/**
 * print_diagsums - imprime la suma de las dos diagonales de una array
 * @size: tama√o de la array
 * @a: array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
	}

	for (x = 1; x <= size; x++)
	{
		sum2 += a[x * size - x];
	}

	printf("%d, %d\n", sum1, sum2);
}

