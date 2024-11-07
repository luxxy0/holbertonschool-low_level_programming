#include "main.h"
/**
 *_memcpy - copia el area de memoria 
 * @src: cadena
 * @dest: byte constante
 * @n: area de memoria
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	return (dest);
}
