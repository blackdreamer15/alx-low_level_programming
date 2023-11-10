#include "variadic_functions.h"

/**
 * print_all - prints anything passed to it as an argument
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
			}

			separator = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(args);
}
