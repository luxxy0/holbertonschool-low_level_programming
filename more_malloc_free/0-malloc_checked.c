#include "main.h"
/**
 * malloc_checked - Asigna memoria usando malloc y termina el programa si falla
 * @b: num de bytes a asignar
 * Return: un puntero de memoria asignada
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
