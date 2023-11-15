#include "main.h"
/**
 * _printf - This function selects the appropriate function
 * to print based on the provided format specifier.
 *
 * @format: The format specifier to identify the type of data to print.
 *
 * Return: The length of the printed string.
 */
int _printf(const char * const format, ...)
{
	int m, n, length = 0;

	conv_match match[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_per},
		{"%d", print_dec},
		{"%i", print_int}
	};

	va_list arguments;

	va_start(arguments, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (m = 0; format[m] != '\0'; m++)
	{
		for (n = 0; n < 5; n++)
		{
			if (strncmp(match[n].strptr, &format[m], 2) == 0)
			{
				length += match[n].fun(arguments);
				m += 1;
				break;
			}
		}
		if (n == 5)
		{
			length += _putchar('%');
		}
		else
		{
			length += _putchar(format[m]);
		}
	}
	va_end(arguments);
	return (length);
}
