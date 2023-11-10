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
	char *str;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);

			if (str == NULL)
			{
				printf("(nil)");
				break;
			}

			printf("%s", str);
			break;
		default:
			continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
