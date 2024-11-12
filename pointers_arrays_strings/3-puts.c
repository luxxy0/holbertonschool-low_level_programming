#include "main.h"
/**
 * _puts - imprime una cadena
 * @str: cadena
 * Return: 0
 */
void _puts(char *str)
{
	while (*str > 0 && *str != '\0')

		_putchar(*str++);
	_putchar ('\n');
}
