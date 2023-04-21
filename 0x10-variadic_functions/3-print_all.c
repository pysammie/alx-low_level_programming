#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed
 * passed to function
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	char *sep;
	va_list args;

	va_start(args, format);

	sep = "";

	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	
	printf("\n");
	va_end(args);
}


