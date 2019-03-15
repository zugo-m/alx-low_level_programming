#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;

	va_list list;

	va_start(list, format);

	while (format[i] && format != NULL)
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
		}
		if (format[i + 1] != '\0' && flag)
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(list);
}
