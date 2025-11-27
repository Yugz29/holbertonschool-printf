#include "main.h"
#include <unistd.h>


/**
 * print_char - Print a charactere
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_char(va_list *argument_list)
{
	char c;

	c = va_arg(*argument_list, int);

	_putchar(c);
	return (1);
}
