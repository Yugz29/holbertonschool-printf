#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	types_t check_modulo = {
		{"%s", print_strings};
		{"%c", print_char};
		{NULL, NULL};
	};

	//va_list argument_list; (pas sur qu'il soit autorise)

	unsigned int format_i, types_i;
	int len;

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
		}
		format_i++;

		else
		{
			Pass;
		}
	}
}
