#include "main.h"

/**
 * print_dec - Print a decimal
 * @argument_list: liste of argument of the variadic fonction
 * Return: 1 value
**/
int print_dec(va_list *argument_list)
{
	unsigned int d;

	d = va_arg(*argument_list, int);

	d /= 10;
	_putchar((d % 10) + '0');

	return (1);
}
