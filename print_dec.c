#include "main.h"

/**
 * print_dec - Print a decimal
 * @argument_list: liste of argument of the variadic fonction
 * Return: 1 value
**/
int print_rec(int x)
{
	if (x >= 10)
	{
		print_rec(x / 10);
	}

	return _putchar((x % 10) + '0');
}

int print_dec(va_list * argument_list)
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
