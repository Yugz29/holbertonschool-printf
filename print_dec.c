#include "main.h"

/**
 * print_rec - Recursively prints an integers number
 * @x: the number to print
 * Return: number of charactere printed
**/
int print_rec(int x)
{
	if (x >= 10)
	{
		print_rec(x / 10);
	}

	return (_putchar((x % 10) + '0'));
}

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
