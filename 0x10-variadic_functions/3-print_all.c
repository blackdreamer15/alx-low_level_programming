#include "variadic_functions.h"

/**
 * print_all - prints anything passed to it as an argument
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i;
	char *str, *separator = "";

	va_start(args, format);

	if (format != NULL)
	{
		for (i = 0; format[i]; i++)
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = (str != NULL) ? va_arg(args, char *) : "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
			}

			if (format[i + 1] != '\0')
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
