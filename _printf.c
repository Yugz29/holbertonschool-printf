#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Print a string or a charactere
 * @format: the argument to print
 * Return: the number of charactere printed.
 **/

int _printf(const char *format, ...)
{
	va_list argument_list;

	int format_i, count;

	format_i = 0;
	count = 0;

	if (format == NULL)
		return (-1);

	va_start(argument_list, format);

	while (format[format_i] != '\0')
	{
		if (format[format_i] != '%')
		{
			_putchar(format[format_i]);
			format_i++;
			count++;
		}
		else
		{
			format_i++;

			if (format[format_i] == '\0')
			{
				return (-1);
			}
			count += find_types(format[format_i], &argument_list);
			format_i++;
		}
	}
	va_end(argument_list);
	return (count);
}
