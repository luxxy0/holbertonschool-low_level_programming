#include "main.h"
/**
 * _islower - voy a romper la computadora
 * @c: letra a comprobar
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
