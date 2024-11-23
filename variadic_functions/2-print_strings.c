#include "variadic_functions.h"
/**
 *print_strings-  imprima cadenas, seguidas de una nueva líne
 *@separator: separador entre cadenas
 *@n: cantidad de cadenas
 *Return: cadena separada de otras cadena
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n); 

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);


		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}


		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
