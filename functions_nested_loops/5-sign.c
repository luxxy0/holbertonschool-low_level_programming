#include "main.h"
/**
 * print_sign - NO PUEDE SER QUE SEPA HACER LO QUE ME PIDEN PERO NO SE NI QUE VERGA HAGO AAAAAAAAAAA
 * @n: sujeto de preba 2.0
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
