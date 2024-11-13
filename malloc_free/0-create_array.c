#include "main.h"
/**
 * create_array - crea una serie de caracteres
 * @size: tama√o de la matriz
 * @c: caracteres
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (char *)malloc(size * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}

		for (x = 0; x < size; x++)
			p[x] = c;
	}
	return (p);
}
