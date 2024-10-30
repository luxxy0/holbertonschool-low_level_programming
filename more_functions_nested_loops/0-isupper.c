#include "main.h"
/**
 * _isupper - imprime 1 si c es mayus
 * 0 si es minus
 * @c: 1/0
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
