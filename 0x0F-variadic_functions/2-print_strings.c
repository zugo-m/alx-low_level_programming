#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(list, char *);
		if (str && separator)
			printf("%s%s", str, separator);
		else if (!str)
			printf("(nil)%s", separator);
		else if (!separator)
			printf("%s", str);
		else if (!str && !separator)
			printf("(nil)");
	}

	printf("%s\n", va_arg(list, char *));

	va_end(list);
}
