#include "main.h"
/**
 * times_table - ESTA VERGA ME VA LLEVANDO 2 DIAS LPM
 */
void times_table(void)
{
	int fila, columna, resultado;

	for (fila = 0; fila <= 9; fila++)
	{
	for (columna = 0; columna <= 9; columna++)
	{
	resultado = fila * columna;

	if (resultado < 10)
	{
	if (columna > 0)
	{
	_putchar(',');
	 _putchar(' ');
	 _putchar(' ');
	}
	_putchar(resultado + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar((resultado / 10) + '0');
	 _putchar((resultado % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
