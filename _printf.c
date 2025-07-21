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
	types_t check_modulo[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_modulo},
		{NULL, NULL},
	};

	va_list argument_list;

	int format_i, types_i, count;

	format_i = 0;
	count = 0;

	if (format == NULL)
	{
		return (-1);
	}

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
			for (types_i = 0; check_modulo[types_i].mod != NULL; types_i++)
			{
				if (format[format_i] == check_modulo[types_i].mod[1])
				{
					check_modulo[types_i].f(&argument_list);
					count++;
					break;
				}
			}
			format_i++;
		}
	}
	va_end(argument_list);
	return (count);
}
