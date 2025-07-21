#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int format_i = 0;
	int type_i, len;

	if (format == NULL)
	{
		return (-1);
	}

	len = _strlen(format);


	while (format_i < len)
	{
		if (format[format_i] != '%')
		{
			_putchar(format[format_i]);
		}
		format_i++;
	}
}