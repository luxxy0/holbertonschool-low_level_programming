#include "main.h"
/**
 * _isdigit - tu  mama
 * @c: sujeto de prueba
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0'  && c <= '9')
		return (1);
	else
		return (0);
}
