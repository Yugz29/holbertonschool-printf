#include "main.h"

/**
 * print_dec - Print a signed decimal integer
 * @argument_list: pointer to the list of argument
 * Return: number of charactere printed.
**/
int print_dec(va_list *argument_list)
{
	int d;

	d = va_arg(*argument_list, int);

	if (d < 0)
	{
		d = -d;
		_putchar('-');
	}

	return (print_rec(d));
}
