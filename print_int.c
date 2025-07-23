#include "main.h"

/**
 * print_int - Print an intergers
 * @argument_list: argument list of the varaidic function
 * Return: 1 value.
**/
int print_int(va_list *argument_list)
{
	int i;

	i = va_arg(*argument_list, int);

	if (i < 0)
	{
		_putchar('-');
		i *= -1;
	}

	_putchar((i / 10) + '0');
	return (1);
}
