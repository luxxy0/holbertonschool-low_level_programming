#include "3-calc.h"
/**
 *op_mul-  multiplica
 *@a: multiplica a
 *@b: multiplica b
 *Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_add- suma
 *@a: entero
 *@b: entero
 *Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub- resta
 *@a: num
 *@b: num
 *Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_div- divide si no es 0
 *@a: num
 *@b: num
 *Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod- devuelve el resto
 *@a: num
 *@b: num
 *Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
