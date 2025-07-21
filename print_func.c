#include "main.h"
#include <unistd.h>


/**
 * print_char - Print a charactere
 * @argument_list: liste d'argument
 * Return: void
**/
int print_char(va_list *argument_list)
{
	char c;

	c = va_arg(*argument_list, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Print a string
 * @argument_list: liste d'argument
 * Return: void
**/
int print_string(va_list *argument_list)
{
	int i;
	char *s;

	s = va_arg(*argument_list, char *);

	if (s == NULL)
	{
		return (-1);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

int print_modulo(va_list *argument_list)
{
	(void)argument_list;
	_putchar('%');
	return (1);
}
