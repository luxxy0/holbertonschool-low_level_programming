#include "main.h"
/**
 * print_last_digit - último dígito de un m
 * @x: xxtentation juasjuas
 * Return: 0
 */
int print_last_digit(int x)
{
	int num = x % 10;

	if (num < 0)
		num = -num;
	_putchar (num + '0');
	return (num);
}
