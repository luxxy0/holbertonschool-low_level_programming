#include "main.h"
/**
 * _puts - imprime una cadena
 * @str: var
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
