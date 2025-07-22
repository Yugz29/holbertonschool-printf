#include "main.h"
#include <unistd.h>

/**
 * print_modulo - Print the modulo
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_modulo(va_list *argument_list)
{
	(void)argument_list;
	_putchar('%');
	return (1);
}
