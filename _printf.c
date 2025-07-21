#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	types_t check_modulo[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_modulo},
		{NULL, NULL},
	};

	va_list argument_list;

	int format_i, types_i, len;

	format_i = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(argument_list, format);

	len = _strlen(format);

	while (format_i < len)
	{
		if (format[format_i] != '%')
		{
			_putchar(format[format_i]);
			format_i++;
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
					check_modulo[types_i].f(argument_list);
					break;
				}
			}
			format_i++;

		}
	}
	va_end(argument_list);
	return (len);
}
