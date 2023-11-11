#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything.
 * @format: the output.
 */
void print_all(const char * const format, ...)
{
	int k = 0, valid_form;
	char *s;
	va_list arg;

	va_start(arg, format);
	while (format && format[k] != '\0')
	{
		valid_form = 1;
		switch (format[k])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				valid_form = 0;
				break;
		}
		if (format[k + 1] != '\0' && valid_form == 1)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(arg);
}
