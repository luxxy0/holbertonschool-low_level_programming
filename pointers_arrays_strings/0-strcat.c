#include "main.h"
/**
 * *_strcat -  función que concatene dos cadena
 * @dest: final
 * @src: inicio
 * Return: un puntero al final de la cadena resultante
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
