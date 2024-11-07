#include "main.h"
/**
 *_strstr - función que localice una subcadena
 * @haystack: cadena
 * @needle: subcadena
 * Return: subcadena x2
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *p;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{

		i = needle;
		if (*haystack == *i)
		{
			p = haystack;
			while (*haystack && *i && *haystack == *i)
			{
				haystack++;
				i++;
			}

			if (*i == '\0')
			{
				return (p);
			}
		}

		haystack++;
	}
	return (NULL);
}
