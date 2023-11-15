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
	int m, n, length = 0, match_found = 0;

	conv_match match[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_per},
		{"%d", print_dec},
		{"%i", print_int}
	};

	va_list arguments;

	va_start(arguments, format);

	if (format[0] == '%' && format[1] == '\0' || format == NULL)
		return (-1);

	for (m = 0; format[m] != '\0'; m++)
	{
		for (n = 4; n >= 0; n--)
		{
			if (match[n].strptr[0] == format[m] && match[n].strptr[1] == format[m + 1])
			{
				length += match[n].fun(arguments);
				match_found = 1;
				break;
			}
		}
		if (match_found)
		{
			m += 2;
			continue;
		}
		_putchar(format[m]);
		length++;
	}
	va_end(arguments);
	return (length);
}
