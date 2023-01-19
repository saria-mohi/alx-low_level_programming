#include "variadic_functions.h"
/**
 * print_all - function to print anything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i = 0;
	int count;
	va_list ap;

	va_start(ap, format);
	for (;format != NULL && format[i] != '\0';i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				count = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				count = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				count = 0;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				count = 0;
				break;
			default:
				count = 1;
				break;
		}
		if (format[i + 1] != '\0' && count == 0)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
