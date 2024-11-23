#include "main.h"
/**
 * *_strcpy - copia la cadena a la que apunta src
 * incluido el byte nulo de terminación(\0)
 * en el búfer al que apunta des
 * @dest: destino
 * @src: from
 * Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
