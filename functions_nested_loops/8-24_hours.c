#include "main.h"
/**
 *jack_bauer - 24h
 *Return: 0
 */
void jack_bauer(void)
{
int h, m;


	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
	_putchar('\n');


		}
	}

}
