#include "main.h"

/**
 * print_int - Print an interger
 * @argument_list: argument list of the varaidic function
 * Return: Number of caracteres printed
**/
int print_int(va_list *argument_list)
{
	int i;
	int count = 0;

	i = va_arg(*argument_list, int);

	if (i < 0)
	{
		_putchar('-');
		count++;
		i *= -1;
	}

	count += print_number_recursive(i);
	return (count);
}
