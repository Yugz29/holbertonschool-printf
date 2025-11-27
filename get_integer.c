#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number_recursive - Prints an unsigned integer recursively
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed
 **/

int print_number_recursive(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number_recursive(n / 10);

	count += _putchar('0' + (n % 10));

	return (count);
}

/**
 * get_integer - Retrieves and prints an integer from a va_list
 * @argument_list: Pointer to the list of arguments
 *
 * Return: The number of characters printed
 **/

int get_integer(va_list *argument_list)
{
	int i;
	int count = 0;
	unsigned int n;

	i = va_arg(*argument_list, int);

	if (i < 0)
	{
		count += _putchar('-');
		n = -i;
	}
	else
		n = i;

	count += print_number_recursive(n);

	return (count);
}
