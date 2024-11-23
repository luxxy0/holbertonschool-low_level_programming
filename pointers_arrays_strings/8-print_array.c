#include "main.h"
/**
 * print_array - imprimen n elementos de una array
 * de num enteros
 * @a: de puntero a array
 * @n: imprime los num de elementos de la array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
