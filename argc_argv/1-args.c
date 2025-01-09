#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: 0
 * @argv: 0
 * Return: num
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int x =  0;

	while (x < argc)
	{
		x++;
	}
	printf("%d", x - 1);
	printf("\n");
	return (0);
}
