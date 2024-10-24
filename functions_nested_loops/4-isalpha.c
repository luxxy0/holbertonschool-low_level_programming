#include "main.h"
#include <ctype.h>
/**
 *_isalpha - verifica los caracteres alfabeticos o algo asi ahr xd
 * @c: sujeto de prueba
 *Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
