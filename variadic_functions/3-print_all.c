#include "variadic_functions.h"
/**
 *print_all- imprime cualquier cosa
 *@format: el formato a imprimir
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list argu;
	int i = 0;
	char *string;

	va_start(argu, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(argu, int));
			break;
			case 'f':
				printf("%f", va_arg(argu, double));
			break;
			case 'c':
				printf("%c", (char) va_arg(argu, int));
			break;
			case 's':
				string = va_arg(argu, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s", string);
					break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
		va_end(argu);
	}
	printf("\n");
}
