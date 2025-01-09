#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: x
 * @argv: y
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s", argv[x]);
		printf("\n");
		x++;
	}
	return (0);
}
